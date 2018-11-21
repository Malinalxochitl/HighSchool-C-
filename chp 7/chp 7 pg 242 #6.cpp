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
Page: 242 # 6
*/
int main()
{
    float blech[] = {10.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};
    int meh = 0;
    for (meh = 1; meh <= 8; meh++)
    {
        cout << blech[meh] << '\n';
    }
    system("PAUSE");
    return 0;
}
