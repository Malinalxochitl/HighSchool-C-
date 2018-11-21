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
Page 205 # 7
*/
int main()
{
    float a, b, c, x, final;
    float poly_two(float, float, float, float); //declares the function
    cout << "Enter a, b, c, and x: ";
    cin >> a >> b >> c >> x; //retrieves data
    final = poly_two(a, b, c, x); //initiates function
    cout << final << '\n';
    system("PAUSE");
    return 0;
}

float poly_two(float a, float b, float c, float x)
{
      float final;
      final = (a * pow(x, 2)) + (b * x) + c; //solves the polynomial
      return final;
}
