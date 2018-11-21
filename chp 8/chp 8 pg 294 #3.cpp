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
Chapter: 8
Page: 294 # 3
*/
int main()
{
        char strng[] = {"Horray for All of Us"}; //string
        char *mess_pt = strng + 11; //sets it to begin at 'A'
        int blah;
        do
        {
              cout << *mess_pt;
        } while (*mess_pt++ != '\0'); //loops using a while
        cout << '\n';
        system("PAUSE");
        return 0;
}
