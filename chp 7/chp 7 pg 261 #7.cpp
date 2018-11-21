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
Page: 261 # 7
*/
int main()
{
        float grades[3][5];
        int A = 0;
        int B = 0;
        int C = 0;          //declarations
        int D = 0;
        int F = 0;
        int i;
        int j;
        for (i = 0;i <= 2;i++)
        {
            for (j = 0;j <=4;j++)
            {
                do
                {
                     cout << "Enter a valid grade: ";
                     cin >> grades[i][j];
                } while (grades[i][j] > 100 || grades[i][j] < 0); //invalid grades will just loop the previous two statements
            }
        }
        for (i = 0;i <= 2;i++)
        {
            for (j = 0;j <=4;j++)
            {
                if (grades[i][j] >= 90)
                {
                   A++;
                }
                else if (grades[i][j] >= 80)
                {
                     B++;
                }
                else if (grades[i][j] >= 70) //checks what grade you get
                {
                     C++;
                }
                else if (grades[i][j] >= 60)
                {
                     D++;
                }
                else
                {
                    F++;
                }
            }
        }
        cout << "A's: " << A << "\nB's: " << B << "\nC's: " << C << "\nD's: " << D << "\nF's: " << F << '\n'; //displays number of grades
        system("PAUSE");
        return 0;
}
