#include <iostream.h>
#include <cstdlib>
#include <math.h>
#include <iomanip.h>
#include <string.h>
#include <ctype.h>
/*
Student: Joel Kurian
Period: 6
Class: C++/JAVA A
Teacher: Mrs.Snelson
School: Randolph High School
Compiler: Dev-C++
Chapter: 9
Page: 320 #6
*/
int main()
{
       int i; //declarations
       char strng[80];
       cin.getline(strng,80); //user input for string
       for (i = 0;strng[i] != '\0';i++){} //gets length of initial string
       for (;i >= 0;i--)
       {
           cout << strng[i]; //prints string in reverse
       }
       cout << '\n';
       system("PAUSE");
       return 0;
}
