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
Page: 246 # 4
*/
int main()
{
    float pricesss[] = {9.92, 6.32, 12.63, 5.95, 10.29};
    double unitsss[5];
    double amountsss[5]; //declarations/initializations
    double total = 0;
    int i;
    for (i = 0; i < 5; i++)
    {
        cout << "Enter number of units: ";
        cin >> unitsss[i];
        amountsss[i] = unitsss[i] * pricesss[i]; //gets data
    }
    cout << "Price" << setw(10) << "Units" << setw(10) << "Amount\n";
    cout << "-----" << setw(10) << "-----" << setw(10) << "------\n"; //header
    for (i = 0; i < 5; i++)
    {
        cout << pricesss[i] << setw(9) << unitsss[i] << setw(10) << amountsss[i] << '\n'; //displays data
    }
    cout << setw(25) << "------\n";
    for (i = 0; i < 5; i++)
    {
        total = total + amountsss[i]; //displays total
    }
    cout << "Total: " << setw(17) << total << '\n';
    system("PAUSE");
    return 0;
}
