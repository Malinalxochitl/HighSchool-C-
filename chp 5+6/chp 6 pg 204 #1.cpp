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
Page 204 # 1
*/
int main()
{
    float firstnum, secnum, max;
    float find_max(float, float); //the function prototype
    
    cout << "\nEnter a number: ";
    cin >> firstnum;
    cout << "Great! Please enter a second number: ";
    cin >> secnum;
    
    max = find_max(firstnum, secnum); // the function is called here
    
    cout << "\nThe maximum of the two numbers is " << max <<'\n';
    system("PAUSE");
    return 0;
}

float find_max(float x, float y)
{                       //Start of function body
      float maxnum;     //variable declaration
      
      if (x >= y)
         maxnum = x;
      else
         maxnum = y;
      
      return maxnum;
}
