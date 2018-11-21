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
Chapter: 6
Page 214 # 7
*/
int main()
{
    int original, gallons, pints, quarts, cups;
    void liquid(int, int &, int &, int &, int &);
    cout << "Enter the number of cups: ";
    cin >> original;
    liquid(original, gallons, quarts, pints, cups);
    cout << "Gallons = " << gallons
         << "\nQuarts = " << quarts
         << "\nPints = " << pints
         << "\nCups = " << cups << "\n";
    system("PAUSE");
    return 0;
}

void liquid(int org, int &gal, int &qua, int &pin, int &cup)
{
    gal = org / 16;
    org = org - (gal * 16);
    qua = org / 4;
    org = org - (qua * 4);
    pin = org / 2;
    org = org - (pin * 2);
    cup = org / 1;
    org = org - (cup * 1);
}
