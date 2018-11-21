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
Chapter: 6
Page 205 # 9
*/
int main()
{
    float money;
    float round(float); //initiates function
    cout << "Enter the amount of money: ";
    cin >> money; //retrieves data
    money = money + (money * .08675); //adds interest
    money = round(money); //initiates function
    cout << "The new amount is $" << money << '\n';
    system("PAUSE");
    return 0;
}

float round(float money)
{
      int converter;
      money = money * 100; //removes 2 decimal places
      money = money + 0.5; //rounds it
      converter = money;
      money = converter; // converts to integer
      money = money / 100; //adds 2 decimal places
      return money;
}
