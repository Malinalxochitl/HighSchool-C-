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
Page: 261 # 5
*/
int main()
{
    int nums[4][5] = {16,22,99 ,4 ,18,
                    -258,4 ,101,5 ,98,
                     105,6 ,15 ,2 ,45,
                     33 ,88,72 ,16,3 };
    int max = 0;
    int i;
    int j;
    for (i = 0;i < 3;i++)
    {
        for (j = 0;j < 4;j++)
        {
            if (nums[i][j] > max)
            {
               max = nums[i][j];
            }
        }
    }
    cout << "The max is: " << max << '\n';
    system("PAUSE");
    return 0;
}
