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
Page: 252 # 7
*/
int main()
{
    double price[] = {10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, 3.98};
    double quantity[] = {4, 8.5, 6, 7.35, 9, 15.3, 3, 5.4, 2.9, 4.8}; 
    double amount[10];                                                      //declarations/initializations/values
    int count = 0;
    void extend(double [], double[], double[]);
    extend(price, quantity, amount); //calls extend
    for (count = 0; count < 10; count++)
    {
        cout << amount[count] << '\n'; //displays amount
    }
    system("PAUSE");
    return 0;
}

void extend (double x[], double y[], double z[])
{
     int i;
     for (i = 0; i < 10; i++) //loops to store values in z
     {
         z[i] = x[i] * y[i];
     }
}
