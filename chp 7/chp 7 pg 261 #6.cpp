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
Page: 261 # 6
*/
int main()
{
        int nums[4][5] = {16 ,22,99 ,4 ,18, 
                         -258,4 ,101,5 ,98,
                         105 ,6 ,15 ,2 ,45,
                         33  ,88,72 ,16,3 }; //array declaration
        int i;
        int j;
        int temp1;
        int temp2; //counters, trackers, etc.
        int p = 0;
        int q = 0;
        int count = 0;
        int minimum = 999;
        int sort[4][5]; //array to display
        while (count <= 20) //loops for each element in the array
        {
              minimum = 999; //resets minimum
              for (i = 0;i <= 3;i++)
              {
                  for (j = 0;j <= 4;j++)
                  {
                      if (nums[i][j] < minimum) //checks to see if it's smaller or not
                      {
                         minimum = nums[i][j];
                         temp1 = i;             //stores location in temp if it's smaller
                         temp2 = j;
                      }
                  }
              }
              nums[temp1][temp2] = 999; //makes the location the max to cancel out repeats
              sort[p][q] = minimum; //stores minimum
              if (q == 4) //changes location for where the minimum will be stored in sort
              {
                    p++;
                    q = 0;
              }
              else
              {
                  q++;
              }
              count++;
        }
        for (p = 0;p <= 3;p++)
        {
            for (q = 0;q <= 4;q++)
            {
                cout << sort[p][q] << setw(5); //display
            }
            cout << '\n';
        }
        system("PAUSE");
        return 0;
}
