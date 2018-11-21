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
Page: 252 # 4
*/
int main()
{
    int nums[5] = {2, 18, 1, 27, 16};
    int find_min(int [5]);   //function prototype
    
    cout << "\nThe minimum value is " << find_min(nums) << '\n';
    system("PAUSE");
    return 0;
}

int find_min(int vals[5]) //find the minimum value
{
    int i;
    int min = vals[0];
    
    for (i = 1; i <= 4; i++)
    {
        if (min > vals[i])
        {
                min = vals[i];
        }
    }
    return min;
}
