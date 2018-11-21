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
Page: 320 #3b
*/
int main()
{
        int counting(char[]);
        char strng[80];
        int characters = 0;
        cout << "Enter a sentence: ";
        cin.getline(strng,80);
        characters = counting(strng);
        cout << "The number of characters in the sentence is: " << characters << '\n';
        system("PAUSE");
        return 0;
}

int counting(char string[80])
{
    char c;
    int i = 0;
    int count = 0;
    while((c = string[i++]) != '\0')
    {
             count++;
    }
    return count;
}
