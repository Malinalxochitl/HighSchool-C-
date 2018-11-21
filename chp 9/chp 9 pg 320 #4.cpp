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
Page: 320 #4
*/
int main()
{
        char strng[80];
        void hexa(char[]); //prototypes + declarations
        cout << "Enter a sentence: ";
        cin.getline(strng,80); //input
        hexa(strng); //calls function
        cout << '\n';
        system("PAUSE");
        return 0;
}

void hexa(char string[80])
{
     char c;
     int new_[80]; //temp variables and arrays for display and counting
     int i = 0;
     while((c = string[i]) != '\0')
     {
              new_[i] = string[i]; //converts char int int
              cout << std::hex << new_[i] << '\n'; //displays as a hexadecimal
              i++;
     }
}
