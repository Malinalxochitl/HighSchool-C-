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
Page 175 # 12c
*/
int main()
{
    int amount, interest, year = 1;
    cout << "Enter the amount deposited: ";
    cin >> amount;
    cout << "Enter the interest percentage: "; // data enetered by user
    cin >> interest;
    if (interest > 1)
    {
       interest = interest / 100; // checks for decimals
    }
    cout << "YEAR" << setw(10) << "AMOUNT\n"
         << "----" << setw(10) << "------\n";
    while (year <= 10)                            // loops until year > 10
    {
          cout << year << setw(10) << amount << '\n';
          year = year + 1;                              // displays data
          amount = amount + (amount * interest);
    }
    system("PAUSE");
    return 0;
}
