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
Page 153 # 6
*/
int main()
{
    int year = 1, value = 24000, accumulated = 4000;
    const int DEP = 4000; // all the values needed
    cout << "YEAR" << setw(15) << "DEPRECATION" << setw(20) << "END OF YEAR VALUE" << setw(30) << "ACCUMULATED DEPRECIATION\n"
         << "----" << setw(15) << "-----------" << setw(20) << "-----------------" << setw(30) << "------------------------\n"; // Prints the heading
    while (year <= 7) // loops until year 7
    {
          cout << year << setw(15) << DEP << setw(20) << value << setw(30) << accumulated << '\n'; // prints & formats the values
          year = year + 1;
          value = value - 4000;
          accumulated = accumulated + 4000; // sets up for the next loop
    }               
    system("PAUSE");
    return 0;
}
