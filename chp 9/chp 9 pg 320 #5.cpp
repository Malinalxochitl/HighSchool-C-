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
Chapter: 9
Page: 320 #5
*/
int main()
{
        char strng[80]; //array declaration
        void bahhumbug(char[]); //prototype
        cout << "Enter a sentence: ";
        cin.getline(strng,80); //array string input
        bahhumbug(strng); //function
        cout << '\n';
        system("PAUSE");
        return 0;
}

void bahhumbug (char strng[80])
{
     int i = 0;
     char c;
     while ((c = strng[i++]) != '\0') //ends when it reaches the termination character, and makes 'c' into the string character
     {
                             if (strng[i] == ' ') //checks for spaces
                             {
                                          cout << c << '\n'; //new line
                             }
                             else
                             {
                                 cout << c; //displays character
                             }
      }
}        
