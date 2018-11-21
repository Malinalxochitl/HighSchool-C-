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
Page: 335 #6
*/
int main()
{     
    char y_u_no_work[80];
    int pls_no = 0;           //declarations, initializations, prototype
    void hurp(char[], int);
    while (pls_no != 10) //loops to have 10 lines input
    {
     cout << "Enter a string: ";
     cin.getline(y_u_no_work, 80); //retrieves string
     hurp(y_u_no_work, pls_no); //calls function
     pls_no++; //increments counter, new line
     cout << '\n';
    }        
    system("PAUSE");
    return 0;
}

void hurp(char *yarrrr, int jesus_pls_help) //stores original array into a new one
{
 char *swoosh[10]; //new array
 swoosh[jesus_pls_help] = yarrrr; //storage
 cout << swoosh[jesus_pls_help] << " has been stored in element " << jesus_pls_help << " of the array"; //display    
}
