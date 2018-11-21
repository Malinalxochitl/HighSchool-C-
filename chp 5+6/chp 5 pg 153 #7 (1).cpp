#include <iostream.h>
#include <cstdlib>
#include <math.h>
#include <iomanip.h>
/*
Joel Kurian
period 6 - C++/JAVA A
snelson
pg 153 # 7
*/
int main()
{
    float hour = 0.5, distance;
    const int SPEED = 55;
    cout << "HOUR" << setw(15) << "DISTANCE\n"
         << "----" << setw(15) << "--------\n";
    while (hour <= 4.0)
    {
          distance = 55 * hour;
          cout << hour << setw(14) << distance << '\n';
          hour = hour + 0.5;
    }
    system("PAUSE");
    return 0;
}
