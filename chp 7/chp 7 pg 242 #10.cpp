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
Page: 242 # 10
*/
int main()
{
    float price[10];
    int amount[10];
    float total[10]; //initializes arrays
    int count = 0;
    for (count = 0; count < 10; count++)
    {
        cout << "Enter a price: ";
        cin >> price[count];
        cout << "Enter an amount: "; //gets values from users
        cin >> amount[count];
        total[count] = price[count] * amount[count];
    }
    cout << "total" << setw(10) << "price" << setw(10) << "amount\n";
    cout << "-----" << setw(10) << "-----" << setw(10) << "------\n"; //header
    for (count = 0; count < 10; count++)
    {
        cout << total[count] << setw(10) << price[count] << setw(8) << amount[count] << '\n'; //displays data
    }
    system("PAUSE");
    return 0;
}
