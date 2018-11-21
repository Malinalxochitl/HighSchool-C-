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
Page: 321 #10
*/
int main()
{
       char strng[80]; //prototype
       char to_lower(char);
       int BLURGH;
       cout << "Enter a sentence to convert all uppercase to lowercase: ";
       cin.getline(strng,80); // input for string
       for (BLURGH = 0;strng[BLURGH] != '\0';BLURGH++) //converts and then displays
       {
           strng[BLURGH] = to_lower(strng[BLURGH]);
           cout << strng[BLURGH];
       }
       cout << '\n';
       system("PAUSE");
       return 0;
}

char to_lower(char letter) //makes it lowercase
{
     if( (letter >= 'A') && (letter <= 'Z') ) //checks for uppercase letter
     {
         return (letter + 32); //adds 32 to the acii code, making it lowercase
     }
         else
         {
             return (letter); //if not uppercase, then remains unchanged
         }
}             
