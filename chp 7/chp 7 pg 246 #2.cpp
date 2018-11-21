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
Chapter: 7
Page: 246 # 2
*/
int main()
{
    float prices[] = {16.24, 18.98, 23.75, 16.29, 19.54, 14.22, 11.13, 15.39}; //initializes array
    int i;
    for (i = 0; i < 8; i++)
    {
        cout << prices[i] << '\n'; //displays data
    }
    system("PAUSE");
    return 0;
}
