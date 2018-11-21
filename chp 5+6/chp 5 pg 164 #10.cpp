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
Page 164 # 10
*/
int main()
{
    int id, inventory, recieved, sold, newbalance, count = 1;
    while (count != 0) // infinite loop (not really)
    {
          cout << "Enter the book ID: ";
          cin >> id;
          if (id == 999)
          {
                 break; // will loop until 999 is entered
          }
          cout << "Enter the inventory balance at the beginning of the month: ";
          cin >> inventory;
          cout << "Enter the number of copies recieved: "; // retrieves info from user
          cin >> recieved;
          cout << "Enter the number of copies sold: ";
          cin >> sold;
          newbalance = inventory + recieved - sold;
          cout << "We have " << newbalance << " instances of book #" << id << '\n'; // displays calculated information
    }
    system("PAUSE");
    return 0;
}
