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
Chapter: 5
Page 180 # 2
*/
int main()
{
    float grade, total, average, count;
    while (1)
    {
        cout << "Enter a grade: ";
        cin >> grade;                   //requests a grade
        if (grade < 0 || grade > 100)
        {
           if (grade == 999)
           {
              break;             //checks for 999 so it can end the loop
           }
           else
           {
              cout << "Invalid grade entered.\n";
              continue;                           //restarts the loop
           }
        }
        total = total + grade;
        count++;
    }
    average = total / count;
    cout << "The average grade is " << setprecision(5) << average << '\n';
    system("PAUSE");
    return 0;
}
