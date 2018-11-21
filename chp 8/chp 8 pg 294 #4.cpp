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
Page: 294 # 4
*/
int main()
{
        int miles[7] = {15, 22, 16, 18, 27, 23, 20};
        int dist[7]; //declarations
        int spoon;
        for (spoon = 0;spoon < 7;spoon++) //loops to store data
        {
            dist[spoon] = miles[spoon];
        }
        for (spoon = 0;spoon < 7;spoon++) //displays data
        {
            cout << dist[spoon] << setw(5);
        }
        cout << '\n';
        system("PAUSE");
        return 0;
}
