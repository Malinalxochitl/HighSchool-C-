#include <iostream.h>
#include <cstdlib>
/*
Joel Kurian
period 6 - C++/JAVA A
snelson
pg 126 # 1
*/
int main()
{
    float grade;
    cout << "Enter the numerical grade: ";
    cin >> grade;
    if (grade >= 90)
    {   
         cout << "Your grade is an A";
    }
    else if (grade >= 80)
    {
         cout << "Your grade is a B";
    }
    else if (grade >= 70)
    {
         cout << "Your grade is a C";
    }
    else if (grade >= 60)
    {
         cout << "Your grade is a D";
    }
    else
    {
         cout << "Your grade is an F";
    }
    cout << '\n';
    system("PAUSE");
    return 0;
}
