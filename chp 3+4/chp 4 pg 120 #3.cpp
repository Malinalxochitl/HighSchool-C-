#include <iostream.h>
/*
Joel Kurian
period 6 - C++/JAVA A
snelson
pg 120 # 3
*/
int main()
{
    float grade;
    cout << "Enter a grade: ";
    cin >> grade;
    if (grade >= 70)
    {
       cout << "Passing grade" << '\n';
    }
    else
    {
        cout << "Failing grade" << '\n';
    }
    system("PAUSE");
    return 0;
}
