#include <iostream.h>
#include <cstdlib>
/*
Joel Kurian
period 6 - C++/JAVA A
snelson
pg 121 # 8
*/
int main()
{
    char character;
    cout << "Enter a character: ";
    cin >> character;
    if (character >= 'a' && character <= 'z')
    {
       cout << "The letter entered is lowercase.\n";
    }
    else
    {
       cout << "The letter entered is uppercase.\n";
    }
    system("PAUSE");
    return 0;
}
