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
Chapter: 8
Page: 294 # 6
*/
int main()
{
        float miles[10] = {240.5, 300.0, 189.6, 310.6, 280.7, 216.9, 199.4, 160.3, 177.4, 192.3};
        float gallons[10] = {10.3, 15.6, 8.7, 14, 16.3, 15.7, 14.9, 10.7, 8.3, 8.4}; //declarations
        float mpg[10];
        int spork;
        for (spork = 0;spork < 10;spork++) //calculattions
        {
            *(mpg + spork) = *(miles + spork) / *(gallons + spork);
        }
        for (spork = 0;spork < 10;spork++) //displays mpg, gallons, and miles
        {
            cout << *(miles + spork) << " miles with " << *(gallons + spork) << " galllons is " << *(mpg + spork) << " mpg\n";
        }
        system("PAUSE");
        return 0;
}
