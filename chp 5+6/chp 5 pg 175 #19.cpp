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
Chapter: 5
Page 175 # 19
*/
int main()
{
    float year, interest = 6, amount;
    while (interest <= 12) // loops to the interest rate
    {
          amount = 1000;
          year = 1;                // resets the year and amount
          while (year <= 10)
          {
                amount = amount + (amount * (interest / 100)); // gets new amount based on interest
                year++;
          }
          cout << "The amount in bank after 10 years with " << interest << "% interest is " << amount << '\n';
          interest++; //displays data and increments interest
    }
    system("PAUSE");
    return 0;
}
