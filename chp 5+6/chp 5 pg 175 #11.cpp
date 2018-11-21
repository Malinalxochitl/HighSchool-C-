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
Page 175 # 11
*/
int main()
{
    int amount = 1000, interest = 0.08, year = 1;
    cout << "YEAR" << setw(10) << "AMOUNT\n"
         << "----" << setw(10) << "------\n"; // header
    while (year <= 10)
    {
          cout << year << setw(10) << amount << '\n';
          year = year + 1;                              // displays the years and the amounts until year 10
          amount = amount + (amount * interest);
    }
    system("PAUSE");
    return 0;
}
