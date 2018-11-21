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
Chapter: 7
Page: 261 # 4
*/
int main()
{
    int first[2][3] = {16, 18, 23,
                        54, 91, 11}; 
    int second[2][3] = {24, 52, 77,
                         16, 19, 59}; //declarations
    int final[2][3];
    int i = 0;
    int j = 0;
    for (i = 0;i < 2;i++)
    {
        for (j = 0;j < 3;j++)
        {
            final[i][j] = first[i][j] + second[i][j]; //adds values
        }
    }
    cout << final[0][0] << setw(5) << final[0][1] << setw(5) << final[0][2] << '\n'; //displays values
    cout << final[1][0] << setw(5) << final[1][1] << setw(5) << final[1][2] << '\n';
    system("PAUSE");
    return 0;
    
}
