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
Page 175 # 14
*/
int main()
{
    int year = 1;
    int sales = 10000000, profit = 1000000, salestotal, profittotal;
    cout << setw(38) << "SALES AND PROFIT PROJECTION\n"
         << setw(39) << "---------------------------\n\n"
         << "YEAR" << setw(20) << "EXPECTED SALES" << setw(25) << "PROJECTED PROFIT\n"  //header
         << "----" << setw(20) << "--------------" << setw(25) << "----------------\n";
         while (year <= 10)
         {
               cout << year << setprecision(8) << setw(13) << '$' << sales << setw(16) << '$' << profit << '\n'; // prints info
               year = year + 1;
               salestotal = salestotal + sales;
               profittotal = profittotal + profit; // adds to total
               sales = sales - (sales * 0.04);
               profit = sales * 0.1;               //gets new profit and sales
         }
    cout << "------------------------------------------------\n"
         << "Totals:" << setw(7) << '$' << salestotal << setw(15) << '$' << profittotal << '\n'; //displays totals
    system("PAUSE");
    return 0;
}
