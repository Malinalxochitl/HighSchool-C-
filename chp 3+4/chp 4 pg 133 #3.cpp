#include <iostream.h>
#include <cstdlib>
/*
Joel Kurian
period 6 - C++/JAVA A
snelson
pg 133 # 3 
*/
int main()
{
    char marcode;
    cout << "Enter a marital code: ";
    cin >> marcode;
    switch (marcode)
    {
           case 'M':
                cout << "Individual is married\n";
                break;
           case 'S':
                cout << "Individual is single\n";
                break;
           case 'D':
                cout << "Individual is divorced\n";
                break;
           case 'W':
                cout << "Individual is widowed\n";
                break;
           default:
                cout << "Invalid code was entered\n";
                break;
    }
    system("PAUSE");
    return 0;
}
