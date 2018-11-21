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
    char letter;
    char to_upper(char); //declarations, prototype
    char *final = &letter;
    while(1) //loops indefinately, until 1 is entered
    {
            cout << "Enter a letter: "; //retrieves letter
            cin >> letter;
            if (letter == '1') //checks for 1
            {
                       break;
            }
            letter = to_upper(letter); //converts the letter
            cout << *final << '\n'; //displays it using a pointer
    }
    system("PAUSE");
    return 0;
}

char to_upper(char letter)
{
     if ( (letter >= 'a') && (letter <= 'z') ) //checks for lowercase
     {
          return (letter - 32); //subtracts 32 from the acii code, making it uppercase
     }
     else
     {
         return letter; //returns it unchanged
     }
}
