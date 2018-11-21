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
Page: 320 #1a
*/
int main()
{
        char strng[80]; //array declaration
        void vowels(char[]); //prototype
        cout << "Enter a sentence: ";
        cin.getline(strng,80); //array string input
        vowels(strng); //function
        cout << '\n';
        system("PAUSE");
        return 0;
}

void vowels (char strng[])
{
     int i = 0;
     char c;
     while ((c = strng[i++]) != '\0') //ends when it reaches the termination character, and makes 'c' into the string character
     {
      switch(c)
               {
                             case 'a':
                             case 'e':
                             case 'i': //checks for vowels
                             case 'o':
                             case 'u':
                                  cout << c; //displays if vowel
               } 
      }
}        
