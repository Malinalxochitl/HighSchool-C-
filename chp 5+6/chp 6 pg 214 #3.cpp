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
Page 214 # 3
*/
int main()
{
    int firstnum, secnum, max;
    void find_max(int, int, int &); //the function prototype
    
    cout << "\nEnter a number: ";
    cin >> firstnum;
    cout << "Great! Please enter a second number: ";
    cin >> secnum;
    
    find_max(firstnum, secnum, max); //the function is called here
    
    cout << "\nThe maximum of the two numbers is " << max << '\n';
    system("PAUSE");
    return 0;
}

void find_max(int x, int y, int &maxnum)
{
     if (x >= y)
     {
           maxnum = x;
     }
     else     //checks for max number
     {
         maxnum = y;
     }
}
