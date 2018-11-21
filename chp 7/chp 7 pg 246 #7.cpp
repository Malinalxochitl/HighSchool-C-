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
Page: 246 # 7
*/
int main()
{
    char strtest [] = "This is a test"; //initializes array
    int i = 0;
    while (strtest[i] != '\0')
    {
          cout << strtest[i]; //displays character
          i++;
    }
    cout << '\n';
    system("PAUSE");
    return 0;
}
