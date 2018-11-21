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
Page: 328 #2b
*/
int main()
{
       char strng[80]; //array counter declarations
       int i;
       void convert(char []); //prototypes
       cout << "Enter a sentence to be converted to uppercase: ";
       cin.getline(strng,80); //input for string
       convert(strng); //calls convert function
       for (i = 0;strng[i] != '\0';i++) //displays strng
       {
           cout << *(strng + i); //pointer
       }
       cout << '\n';
       system("PAUSE");
       return 0;
}

void convert(char strng[80]) //converts letter
{
     char to_upper(char);
     int i = 0;
     while (strng[i] != '\0')
     {
           strng[i] = to_upper(strng[i]); //calls the to_upper function
           i++;
     }
}

char to_upper(char letter)
{
     if ( (letter >= 'a') && (letter <= 'z') ) //checks for lowercase
     {
          return (letter - 32); //subtracts 32 from the acii code, making it lowercase
     }
     else
     {
         return letter; //returns it unchanged
     }
}
