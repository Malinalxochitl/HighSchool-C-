#include <iostream.h>
#include <cstdlib>
#include <math.h>
#include <iomanip.h>
#include <string.h>
#include <ctype.h>
/*
Joel Kurian
period 6 - C++/JAVA A
snelson
pg 134 # 6
*/
int main()
{
    char opselect;
    double fnum, snum;
    cout << "Please type in two numbers: ";
    cin >> fnum >> snum;
    cout << "Enter a select code: ";
    cout << "\n       a for addition";
    cout << "\n       m for multiplication";
    cout << "\n       d for division : ";
    cin >> opselect;
    switch (opselect)
    {
           case 'a':
                cout << "The sum of the numbers entered is " << fnum+snum << '\n';
                break;
           case 'm':
                cout << "The product of the numbers entered is " << fnum*snum << '\n';
                break;
           case 'd':
                cout << "The first number divided by the second is " << fnum/snum << '\n';
                break;
    }
    system("PAUSE");
    return 0;
}
