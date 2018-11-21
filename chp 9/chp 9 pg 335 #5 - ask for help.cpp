#include <iostream.h>
#include <cstdlib>
#include <math.h>
#include <iomanip.h>
#include <string.h>
#include <ctype.h>
/*
Student: Joel Kurian
Period: 6
Class: C++/JAVA A
Teacher: Mrs.Snelson
School: Randolph High School
Compiler: Dev-C++
Chapter: 9
Page: 335 #5
*/
int main()
{  
    char * day();
    char *address;
    address = day();        //prototype - driver main
    cout << '\n' << address << '\n';
    system("PAUSE");
    return  0;
}

char * day()
{
     char *days[] = {"Monday",
                               "Tuesday",
                               "Wednesday",
                               "Thursday", //pointer array for days of the week
                               "Friday",
                               "Saturday",
                               "Sunday",};
    int count; //counter
    while (1) //loops until a valid number is entered
    {
          cout << "Enter a number between, and including, 1-7 for a day of the week: ";
          cin >> count; //input
          if (count >= 1 && count <= 7) //checks for correct answer, then escapes the loop
          {
             count--;
             break;
          }
    }
    cout << "The day of the week is " << days[count]; //display
    return &days[count];
}
