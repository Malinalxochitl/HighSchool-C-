#include <iostream.h>
#include <cstdlib>
/*
Joel Kurian
period 6 - C++/JAVA A
snelson
pg 127 # 3
*/
int main()
{
    float data;
    char deg;
    cout << "Enter the temperature, and then enter f for fahrenheit, or c for celsius: ";
    cin >> data >> deg;
    if (deg == 'f')
    {
        float temp;
        temp = (9.0 / 5.0) * data + 32.0;
        cout << "The fahrenheit equivalent of " << data << " is " << temp;
    }
    else if (deg == 'c')
    {
        float temp;
        temp = (5.0 / 9.0) * (data - 32.0);
        cout << "The celsius equivalent of " << data << " is " << temp;
    }
    else
    {
        cout << "Invalid conversion type";
    }
    cout << '\n';
    system("PAUSE");
    return 0;
}
