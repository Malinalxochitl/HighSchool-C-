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
Page: 328 #8
*/
int main()
{
    char letter[1];
    char toupper(char[]);
    while(1)
    {
            cout << "Enter a letter: ";
            cin.get(letter);
            if (letter == '1')
            {
                       break;
            }
            toupper(letter);
            cout << letter << '\n';
    }
}

char toupper(char letter) //makes it uppercase
{
     if( (letter >= 'a') && (letter <= 'z') ) //checks for lowercase letter
     {
         return (letter - 32); //subtracts 32 to the acii code, making it uppercase
     }
         else
         {
             return (letter); //if not lowercase, then remains unchanged
         }
}   
