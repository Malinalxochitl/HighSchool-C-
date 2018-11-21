#include <iostream.h>
/*
Joel Kurian
period 6 - C++/JAVA A
snelson
pg 120 # 7a
*/
int main()
{
    int month, day;
    cout << "Enter a month (1-12): ";
    cin >> month;
    cout << "Enter a day (1-31): ";
    cin >> day;
        if (month <= 0 || month >= 13)
    {
         cout << "Month is invalid\n";  
    }
        if (day <= 0 || day >= 32)
    {
         cout << "Day is invalid\n"; 
    }
    cout << "Goodbye\n";
    system("PAUSE");
    return 0;
}
