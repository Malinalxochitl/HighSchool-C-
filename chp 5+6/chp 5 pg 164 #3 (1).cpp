#include <iostream.h>
#include <cstdlib>
#include <math.h>
#include <iomanip.h>
/*
Joel Kurian
period 6 - C++/JAVA A
snelson
pg 164 # 3
*/
int main()
{
    int celsius, end, count = 1, increment;
    float fahren;
    cout << "Enter the starting value of celsius: ";
    cin >> celsius;
    cout << "Enter the number of conversions to be made: ";
    cin >> end;
    cout << "Enter the increment value of celsius: ";
    cin >> increment;
    while (count <= end)
    {
          fahren = (9.0/5.0) * celsius + 32.0;
          cout << "Celsius " << celsius << " = fahrenheit " << fahren << '\n';
          celsius = celsius + increment;
          count = count + 1;
    }
    system("PAUSE");
    return 0;
}
