/*
Joel Kurian
period 6 - C++/JAVA A
snelson
pg 97 # 3
*/
#include <iostream.h>
int main()
{
    double celsius, fahrenheit;
    cout << "Enter the temperature in degrees Fahrenheit: ";
    cin >> fahrenheit;
    celsius = (5.0/9.0)*(fahrenheit-32.0);
    cout << "The temperature in celsius is " << celsius <<'\n';
    system("PAUSE");
    return 0;
}
