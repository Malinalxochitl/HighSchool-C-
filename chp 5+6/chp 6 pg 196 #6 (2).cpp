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
Page 196 # 6
*/
int main()
{
    double num1, num2, final;
    double powfun(double, double);
    cout << "Enter a number, then a number to raise it to: ";
    cin >> num1
        >> num2;
    powfun(num1, num2);
    final = powfun(num1, num2);
    cout << final << '\n';
    system("PAUSE");
    return 0;
}

double powfun(double x, double y)
{
       double z;
       z = pow(x, y);
       return z;
}
