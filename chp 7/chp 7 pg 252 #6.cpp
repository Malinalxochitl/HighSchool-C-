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
Chapter: 7
Page: 252 # 6
*/
int main()
{
    char message[] = "Vacation is near"; //this is the "string" to be displayed
    void display(char []); //initialization
    display(message); //displays string
    system("PAUSE");
    return 0;
}
    
void display(char message[])
{
     int i;
     for (i = 0; i <= 8; i++)
     {
         cout << message[i]; //displays 8 letters, one at a time
     }
     cout << '\n';
}
