#include <cstdlib>
#include <iostream.h>
/*
Student: Joel Kurian
Period: 6
Class: C++/JAVA A
Teacher: Mrs.Snelson
School: Randolph High School
Compiler: Dev-C++
Test thing i don't know
*/
int main()
{
    int count = 0, total, largest, smallest = 999999999, difference, num; //declarations
    double average;
    double avg(int, int); //prototype
    while(1) //infinite loop
    {
             cout << "\nEnter an integer: "; //input from user
             cin >> num;
             if(num < 0)
             {
                    continue; //restarts loop
             }
             else if(num == 0)
             {
                  break; //ends loop
             }
             if (num > largest)
             {
                     largest = num; //largest check
             }
             if (num < smallest)
             {
                     smallest = num; //smallest check
             }
             total = total + num;
             count++; //adds to count and total
    }
    average = avg(total, count); //average function call
    difference = largest - smallest;
    cout << "\n# of integers: " << count
         << "\nAverage: " << average //display
         << "\nLargest: " << largest
         << "\nSmallest: " << smallest
         << "\nDifference: " << difference << '\n';
    system("PAUSE");
    return 0;
}

double avg(int p, int y)
{
      return (p / y);
}     
