/*
Joel Kurian
period 6 - C++/JAVA A
snelson
pg 98 # 7
*/
#include <iostream.h>
int main()
{
    double number, sum, avg;
    cout << "Enter a number: ";
    cin >> number;
    sum=sum+number;
    cout << "Enter a second number: ";
    cin >> number;
    sum=sum+number;
    cout << "Enter a third number: ";
    cin >> number;
    sum=sum+number;
    cout << "Enter a fourth number: ";
    cin >> number;
    sum=sum+number;
    avg = sum/4;
    cout << "The sum is " << sum << "\nThe average is " << avg << '\n';
    system("PAUSE");
    return 0;
}
