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
Chapter: 8
Page: 289 # 4a+4b
*/
int main()
{
        char samtest[] = {"This is a sample"}; //string to be displayed
        int i;
        for (i = 0;i < 16;i++)
        {
            cout << *(samtest + i); //displays string using pointers
        }
        cout << '\n';
        for (i = 10;i < 16;i++)
        {
            cout << *(samtest + i); //displays 
        }
        cout << '\n';
        system("PAUSE");
        return 0;
}
