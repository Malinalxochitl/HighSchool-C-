#include <iostream.h>
#include <cstdlib>
#include <math.h>
#include <iomanip.h>
/*
Student: Joel Kurian
Period: 6
Class: C++/JAVA A
Teacher: Mrs.Snelson
School: Randolph High School
Compiler: Dev-C++
Benchmark 1
*/
float fantasypoints = 0;
int main()
{
    int competitor = 69, jumpmarkers = 10, bikemarkers = 10, poolmarkers = 10, totalmarkers = 50, age = 42, runningmarkers = 10, javelinmarkers = 10;
    float temperature, weight = 150, feet = 5, inch = 10, BMi = 0; //declarations
    char weather = 'c';
    float BMI(float, float);
    float high_jump(float, int);
    float swimming(int, int);
    float biking(char, int); //prototypes
    float running(float, float, int);
    float javelin(float, int);
    cout << "Enter your competitor number: "; //competitor #
    cin >> competitor;
    cout << "Enter the age of the competitor in years: ";
    cin >> age;
    if (age < 18)
    {
            while (age < 18)
            {
              cout << "Invalid age: "; //checks the age
              cin >> age;
            }
    }
    cout << "Enter feet, then inches in height: ";
    cin >> feet >> inch;
    inch = inch + (feet * 12); //converts feet to inches
    if (inch > 84)
    {
               while (inch > 84)
               {
                    cout << "Too tall. Enter new feet and inches: ";
                    cin >> feet >> inch;                             //checks height
                    inch = inch + (feet * 12);
               }
    }
    cout << "Enter how much your competitor weighs in pounds: ";
    cin >> weight;
    cout << "Enter the temperature in degrees F: ";
    cin >> temperature;
    cout << "Enter the type of weather (r = raining, s = sunny, c = cloudy): "; //more info
    cin >> weather;
    if ((weather != 'r') && (weather != 's') && (weather != 'c'))
    {
                 while ((weather != 'r') && (weather != 's') && (weather != 'c'))
                 {
                       cout << "Invalid weather: "; //checks for right character
                       cin >> weather;
                 }
    }
     BMi = BMI(weight, inch); //bmi function call
     if (BMi < 18.5)
     {
             cout << "Your competitor has a BMI of " << BMi << " and is underweight.\n";
     }
     else if (BMi < 24.9)
     {
          cout << "Your competitor has a BMI of " << BMi << " and is normal.\n"; //displays bmi
     }
     else if (BMi < 29.9)
     {
          cout << "Your competitor has a BMI of " << BMi << " and is Overweight.\n";
     }
     else
     {
         cout << "Your competitor has a BMI of " << BMi << " and is Obese.\n";
     }
     do //loops if too many markers are used
     {
         totalmarkers = 50;
         cout << "WARNING: you must not use more than 50 markers!\n";
         cout << "Enter the number of markers you will use for the jumping event: ";
         cin >> jumpmarkers;
         if (jumpmarkers < 3 || jumpmarkers > 15)
         {
            while (jumpmarkers < 3 || jumpmarkers > 15)
            {
                  cout << "Invalid # of markers (3 to 15): "; //checks for right # of markers
                  cin >> jumpmarkers;
                  totalmarkers = totalmarkers - jumpmarkers;
            }
         }
         cout << "Enter the number of markers you will use for the biking event: ";
         cin >> bikemarkers;
         if (bikemarkers < 3 || bikemarkers > 15)
         {
            while (bikemarkers < 3 || bikemarkers > 15)
            {
                  cout << "Invalid # of markers (3 to 15): "; //checks for right # of markers
                  cin >> bikemarkers;
                  totalmarkers = totalmarkers - bikemarkers;
            }
         }
         cout << "Enter the number of markers you will use for the pool event: ";
         cin >> poolmarkers;
         if (poolmarkers < 3 || poolmarkers > 15)
         {
            while (poolmarkers < 3 || poolmarkers > 15)
            {
                  cout << "Invalid # of markers (3 to 15): "; //checks for right # of markers
                  cin >> poolmarkers;
                  totalmarkers = totalmarkers - poolmarkers;
            }
         }
         cout << "Enter the number of markers you will use for the running event: ";
         cin >> runningmarkers;
         if (runningmarkers < 3 || runningmarkers > 15)
         {
            while (runningmarkers < 3 || runningmarkers > 15)
            {
                  cout << "Invalid # of markers (3 to 15): "; //checks for right # of markers
                  cin >> runningmarkers;
                  totalmarkers = totalmarkers - runningmarkers;
            }
         }
         cout << "Enter the number of markers you will use for the javelin event: ";
         cin >> javelinmarkers;
         if (javelinmarkers < 3 || javelinmarkers > 15)
         {
            while (javelinmarkers < 3 || javelinmarkers > 15) //checks for right # of markers
            {
                  cout << "Invalid # of markers (3 to 15): ";
                  cin >> javelinmarkers;
                  totalmarkers = totalmarkers - javelinmarkers;
            }
         }
     } while (totalmarkers < 0);
    fantasypoints = fantasypoints + high_jump(inch, jumpmarkers);
    fantasypoints = fantasypoints + biking(weather, bikemarkers);
    fantasypoints = fantasypoints + swimming(age, poolmarkers);
    fantasypoints = fantasypoints + running(temperature, BMi, runningmarkers); //all the function calls
    fantasypoints = fantasypoints + javelin(weight, javelinmarkers);
    if (weather == 'r')
    {
       cout << "5 bonus points for being a good sport\n";
       fantasypoints = fantasypoints + 5;
    }
    else
    {
        cout << "5 point penalty for good weather\n"; //bonuses
        fantasypoints = fantasypoints - 5;
    }
    if (temperature > 85)
    {
       cout << "5 point bonus for miserable heat\n";
       fantasypoints = fantasypoints + 5;
    }
    cout << "Thank you for entering competitor #" << competitor
         << "\n" << jumpmarkers << " markers were used in jumping"
         << "\n" << bikemarkers << " markers were used in biking"
         << "\n" << poolmarkers << " markers were used in the pool" //ending information
         << "\n" << javelinmarkers << " markers were used in javelin"
         << "\n" << runningmarkers << " markers were used in running"
         << "\nYour final fantasy point total is " << fantasypoints << '\n';
    system("PAUSE");
    return 0;
}

float javelin(float weight, int markers)
{
      float total = 4;
      float add = 0;
      add = sqrt (weight / 10); //compensates for first throw
      markers = markers - 1;
      while (markers > 0)
      {
            total = total + add; //adds points depending on weight
            markers = markers - 1;
      }
      cout << total << " points were earned during the javelin event\n";
      return total;
}

float running(float temp, float bmi, int markers)
{
      float score = 0;
      float dec = 0;
      float total = 0;
      if (temp > 75)
      {
               dec = 0.9;
      }
      else           //changes the decrement value
      {
          dec = 0.93;
      }
      if (bmi >= 27 && markers > 8)
      {
              markers = 8; //checks the bmi
      }
      for (score = 10; markers != 0; markers-= 1)
      {
             total = total + score; //adds points and decreases the increment
             score = score * dec;
      }
      cout << total << " points were scored during running\n";
      return total;
}

float high_jump(float height, int markers)
{
    float barheight = height * 0.6;
    float limit = height * 0.8;
    int score = 5;
   float counter1 = 0;
    while (markers != 0)
    {
          if (barheight < limit)
          {
             barheight = barheight + 2;
             counter1 = counter1 + score; //adjusts bar height and adds points
             score = score + 1;
          }
          else
          {
              break; //exits loop since they won't ever make it over the bar again
          }
          markers = markers - 1;
    }
    cout << counter1 << " points were earned during the high jump.\n";
    return counter1;
}

float biking(char weather, int markers)
{
    float counter;
    int score;
    switch (weather)
    {
           case 'r':
                score = 6;
                break;
           case 's':
                score = 7; //adjusts increment based on weather
                break;
           case 'c':
                score = 8;
                break;
    }
    while (markers != 0)
    {
          counter = counter + score; //increment
          markers = markers - 1;
    }
    cout << counter << " points were earned during the biking event.\n";
    return counter;
}

float swimming(int age, int markers)
{
      float counter2 = 0;
      int score1 = 6;
      do
      {
            counter2+= score1;
            score1 = score1 + (age / 50); //increments to the increment based on age
            markers = markers - 1;
      } while (markers != 0);
      cout << counter2 << " points were earned during the swimming event.\n";
      return counter2;
}

float BMI(float weight, float height)
{
     float BMI;
     BMI = (weight * 703)/(height * height); //gets the bmi
     return BMI;
}
