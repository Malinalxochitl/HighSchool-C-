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
Page 164 # 3
*/
int main()
{
    int celsius, end, count = 1, increment; // variable declarations
    float fahren;
    cout << "Enter the starting value of celsius: ";
    cin >> celsius;
    cout << "Enter the number of conversions to be made: "; // retrieves values from user
    cin >> end;
    cout << "Enter the increment value of celsius: ";
    cin >> increment;
    while (count <= end) // loops the number of times specified by the user with 'end'
    {
          fahren = (9.0/5.0) * celsius + 32.0; // converts celsius to fahrenheit
          cout << "Celsius " << celsius << " = fahrenheit " << fahren << '\n'; // prints all the things
          celsius = celsius + increment;
          count = count + 1; // prepares for the next loop
    }
    system("PAUSE");
    return 0;
}
