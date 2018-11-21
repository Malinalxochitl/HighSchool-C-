#include <iostream.h>
/*
Joel Kurian
period 6 - C++/JAVA A
snelson
pg 120 # 4
*/
int main()
{
    int salary, hours;
    cout << "Enter how many hours was worked: ";
    cin >> hours;
    if (hours <= 40)
    {
       salary = hours * 8;
       cout << "The salary is " << salary << " Dollars." << '\n';
    }
    else
    {
        salary = 320 + ((hours-40)*12)+(40*8);
        cout << "The salary is " << salary << " Dollars." << '\n'; 
    }
    system("PAUSE");
    return 0;
}
