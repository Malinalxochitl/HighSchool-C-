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
Page 180 # 3
*/
int main()
{
    int num, test, count = 1;
    cout << "Enter a number: ";
    cin >> num;
    test = num;
    cout << test % 10;
    do
    {
         test = num / pow(10,count);
         test = test % 10;
         if (test == 0)
         {
                  break;
         }
         cout << test;
         count++;
    } while (1);
    cout << '\n';
    system("PAUSE");
    return 0;
}
