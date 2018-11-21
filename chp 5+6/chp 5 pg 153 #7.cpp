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
Page 153 # 7
*/
int main()
{
    float hour = 0.5, distance;
    const int SPEED = 55; // declares the values
    cout << "HOUR" << setw(15) << "DISTANCE\n"
         << "----" << setw(15) << "--------\n"; // prints the header
    while (hour <= 4.0) // loops until hour is equal to four
    {
          distance = 55 * hour; // formula for distance
          cout << hour << setw(14) << distance << '\n'; // prints the info
          hour = hour + 0.5; // increment of .5 for hour
    }
    system("PAUSE");
    return 0;
}
