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
Page 205 # 8
*/
int main()
{
    int count; //declarations
    char convert;
    double temp;
    double tempvert(double, char); //function prototype
    
    for(count = 1; count <= 4; count++)
    {
        cout << "\nEnter a temperature, then f for fahrenheit, or c for celsius: ";
        cin >> temp >> convert;
        cout << "The equivalent to that is " << tempvert(temp, convert);
    }
}
//convert the temp
double tempvert (double temp, char conv)
{
       double final;
       if (conv == 'f' || conv == 'F') //checks for selection, defaults of celsius
       {
          final = (9.0/5.0) * (temp - 32.0);
       }
       else                                   //conversions
       {
          final = temp * (5.0 / 9.0) + 32;
       }
       return final;
}
