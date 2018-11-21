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
Page 214 # 4
*/
int main()
{
    int quarters, nickels, dimes, pennies; //dclarations
    float change;
    float round(float); //prototypes
    void change1(float, int &, int &, int &, int &);
    cout << "Enter a dollar amount: ";
    cin >> change; //retrieves data
    change = round(change); //rounds it
    change1(change, quarters, dimes, nickels, pennies); //sorts dollar amount
    cout << "Quarters = " << quarters
         << "\nDimes = " << dimes
         << "\nNickels = " << nickels //displays data
         << "\nPennies = " << pennies << "\n";
    system("PAUSE");
    return 0;
}

void change1(float change, int &q, int &d, int &n, int &p)
{
     q = change / .25;
     change = change - (.25 * q);
     d = change / .1;
     change = change - (.1 * d); //sorts the dollar into coins by dividing and taking the remainders
     n = change / .05;
     change = change - (.05 * n);
     p = change / .01;
     change = change - (.01 * p);
}

float round(float money)
{
      int converter;
      money = money * 100; //removes 2 decimal places
      money = money + 0.5; //rounds it
      converter = money;
      money = converter; // converts to integer
      money = money / 100; //adds 2 decimal places
      return money;
}
