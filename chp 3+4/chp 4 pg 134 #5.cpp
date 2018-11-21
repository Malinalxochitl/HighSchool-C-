#include <iostream.h>
#include <cstdlib>
/*
Joel Kurian
period 6 - C++/JAVA A
snelson
pg 134 # 5 
*/
int main()
{
    float grade;
    int test;
    cout << "Enter a grade: ";
    cin >> grade;
    test = grade >= 70;
    switch (test)
    {
           case 1:
                cout << "Passing grade\n";
                break;
           default:
                cout << "Failing grade\n";
                break;
    }
    system("PAUSE");
    return 0;
}
