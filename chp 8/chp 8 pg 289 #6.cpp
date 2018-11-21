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
Page: 289 # 6
*/
int main()
{
        float blech[] = {10.95, 16.32, 12.15, //array
                           8.22, 15.98, 26.22, 
                           13.54, 6.45, 17.59};
        int soup;
            for (soup = 0;soup < 9;soup++) //display loops
            {
                 cout << *(blech + soup) << '\n'; //displays array
            }
        system("PAUSE");
        return 0;
}
