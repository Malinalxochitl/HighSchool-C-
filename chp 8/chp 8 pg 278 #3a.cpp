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
Chapter: 8
Page: 278 # 3a
*/
int main()
{
        int num, count;
        long date;
        float yield; //declarations
        double price;
        cout << "num: " << &num
             << "\ncount: " << &count
             << "\ndate: " << &date //displays addresses
             << "\nyield: " << &yield
             << "\nprice: " << &price << '\n';
        system("PAUSE");
        return 0;
}
