#include <iostream.h>
#include <cstdlib>
/*
Joel Kurian
period 6 - C++/JAVA A
snelson
pg 126 # 2
*/
int main()
{
    float years;
    cout << "Enter the number of years the money has been in the bank: ";
    cin >> years;
    if (years >= 5)
    {   
         cout << "The interest rate is .095\n";
    }
    else if (years >= 4)
    {
         cout << "The interest rate is .09\n";
    }
    else if (years >= 3)
    {
         cout << "The interest rate is .085\n";
    }
    else if (years >= 2)
    {
         cout << "The interest rate is .075\n";
    }
    else if (years >= 1)
    {
         cout << "The interest rate is .065\n";
    }
    else
    {
         cout << "The interest rate is .058\n";
    }
    system("PAUSE");
    return 0;
}
