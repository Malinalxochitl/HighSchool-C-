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
Page: 252 # 8
*/
int main()
{
    int testvals[] = {89, 95, 72, 83, 99, 54, 86, 75, 92, 73, 79, 75, 82, 73};
    double average = 0;
    double calc_avg(int []); //values, initialization, declaration, etc.
    double var = 0;
    double variance(int [], double);
    average = calc_avg(testvals);
    cout << "The average is: " << average << '\n';
    var = variance(testvals, average);           //display results
    cout << "The variance is: " << var << '\n';
    system("PAUSE");
    return 0;
}

double calc_avg(int x[])
{
       double avg = 0;
       int i;
       for (i = 0;i < 14;i++)
       {
           avg = avg + x[i]; //adds all values
       }
       avg = avg / 14; //divides by total
       return avg;
}

double variance(int testvals[], double avrg)
{
       double final = 0;
       int i = 0;
       double newtest[14];
       for (i = 0; i < 14; i++)
       {
           newtest[i] = testvals[i]; //stores values in separate array to preserve values
           newtest[i] = newtest[i] - avrg;
           newtest[i] = newtest[i] * newtest[i];
           final = final + newtest[i];
       }
       final = final / 14; //calculates final variance
       return final;
}
