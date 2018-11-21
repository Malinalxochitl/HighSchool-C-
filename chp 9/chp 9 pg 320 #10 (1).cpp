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
       int BLURGH;
       cout << "Enter a sentence to convert all uppercase to lowercase: ";
       cin.getline(strng,80); // input for string
       for (BLURGH = 0;strng[BLURGH] != '\0';BLURGH++) //converts and then displays
       {
           strng[BLURGH] = tolower(strng[BLURGH]);
           cout << strng[BLURGH];
       }
       cout << '\n';
       system("PAUSE");
       return 0;
}
