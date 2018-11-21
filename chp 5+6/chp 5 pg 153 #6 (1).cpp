#include <iostream.h>
#include <cstdlib>
#include <math.h>
#include <iomanip.h>
/*
Joel Kurian
period 6 - C++/JAVA A
snelson
pg 153 # 6
*/
int main()
{
    int year = 1, value = 24000, accumulated = 4000;
    const int DEP = 4000;
    cout << "YEAR" << setw(15) << "DEPRECATION" << setw(20) << "END OF YEAR VALUE" << setw(30) << "ACCUMULATED DEPRECIATION\n"
         << "----" << setw(15) << "-----------" << setw(20) << "-----------------" << setw(30) << "------------------------\n";
    while (year <= 7)
    {
          cout << year << setw(15) << DEP << setw(20) << value << setw(30) << accumulated << '\n';
          year = year + 1;
          value = value - 4000;
          accumulated = accumulated + 4000;          
    }               
    system("PAUSE");
    return 0;
}
