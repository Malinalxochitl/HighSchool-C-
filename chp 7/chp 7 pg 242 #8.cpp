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
Page: 242 # 8
*/
int main()
{
    int fmax[10];
    int i;
    cin >> fmax[0];
    int max = fmax[0];
    for (i = 1; i <= 9; i++)
    {
          cin >> fmax[i];
          if (fmax[i] > max)
          {
                      max = fmax[i];
          }
    }
    cout << max << '\n';
    system("PAUSE");
    return 0;
}
