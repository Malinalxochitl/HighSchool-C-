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
Chapter: 6
Page 204 # 4
*/
int main()
{
    double num1;
    double find_abs(double);
    cin >> num1;
    num1 = find_abs(num1); //unimportant main stuff
    cout << num1 << '\n';
    system("PAUSE");
    return 0;
}
double find_abs(double x)
{
       if (x < 0)
       {
             x = x * -1; //checks if x is below 0
       }
       return x; //returns the absolute value of x
}
