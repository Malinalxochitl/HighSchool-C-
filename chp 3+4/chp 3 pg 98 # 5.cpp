/*
Joel Kurian
period 6 - C++/JAVA A
snelson
pg 98 # 5
*/
#include <iostream.h>
int main()
{
    double miles, gas, mpg;
    cout << "Enter the miles driven: ";
    cin >> miles;
    cout << "Enter the gallons of gas used: ";
    cin >> gas;
    mpg = miles/gas;
    cout << "The mpg of the car is " << mpg << '\n';
    system("PAUSE");
    return 0;
}
