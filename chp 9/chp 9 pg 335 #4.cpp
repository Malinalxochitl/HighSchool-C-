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
Page: 335 #4
*/
int main()
{  
    void day();
    day();        //prototype - driver main
    cout << '\n';
    system("PAUSE");
    return  0;
}

void day()
{
     char *swiggity_swooty[] = {"Monday",
                               "Tuesday",
                               "Wednesday",
                               "Thursday", //pointer array for days of the week
                               "Friday",
                               "Saturday",
                               "Sunday",};
    int gon_get_dat_booty; //counter
    while (1) //loops until a valid number is entered
    {
          cout << "Enter a number between, and including, 1-7 for a day of the week: ";
          cin >> gon_get_dat_booty; //input
          if (gon_get_dat_booty >= 1 && gon_get_dat_booty <= 7) //checks for correct answer, then escapes the loop
          {
             gon_get_dat_booty--;
             break;
          }
    }
    cout << "The day of the week is " << swiggity_swooty[gon_get_dat_booty]; //display
}
