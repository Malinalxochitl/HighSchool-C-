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
Page 196 # 5
*/
int main()
{
    float num1;
    float square(float);
    cout << "Enter a number: ";
    cin >> num1;
    num1 = square(num1);
    cout << num1 << '\n';
    system("PAUSE");
    return 0;
}

float square(float x)
{
      x = x * x;
      return x;
}
