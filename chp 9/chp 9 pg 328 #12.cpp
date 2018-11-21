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
Page: 328 #12
*/
int main()
{
    void remove(char[], char[]);
    char original[80] = " ";   //prototypes and declarations
    char final[80] = " ";
    int d;
    cout << "Enter a string to have the leading spaces removed from: ";
    cin.getline(original, 80); //input for string to have spaces removed
    remove(original, final); //calls remove
    for (d = 0;final[d] != '\0';d++) //display
    {
        cout << final[d];
    }
    cout << '\n';
    system("PAUSE");
    return 0;
}

void remove(char string1[80], char string2[80]) //removes leading spaces
{
     int i = 0; //counter declarations
     int j = 0;
     for (;string1[i] == ' ';i++){} //gets length where leading spaces stop
     for (;string1[i] != '\0';i++) //transfers string to another array, skipping the leading spaces
     {
         string2[j] = string1[i];
         j++;
     }
}
