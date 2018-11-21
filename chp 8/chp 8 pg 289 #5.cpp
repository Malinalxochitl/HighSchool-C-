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
Page: 289 # 5
*/
int main()
{
        float rates[] = {12.9, 18.6, 11.4, 13.7, 9.5, 15.2, 17.6}; //array
        int i;
        for (i = 0;i < 7;i++)
        {
            cout << *(rates + i) << '\n'; //displays array
        }
        system("PAUSE");
        return 0;
}
