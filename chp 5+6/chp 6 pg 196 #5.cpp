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
    float square(float); //initiates the function
    cout << "Enter a number: "; //gets num1
    cin >> num1;
    num1 = square(num1); // calls function
    cout << num1 << '\n';
    system("PAUSE");
    return 0;
}

float square(float x) //function 'square'
{
      x = x * x; //squares x
      return x; //returns x
}
