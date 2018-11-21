#include <iostream.h>
#include <cstdlib>
/*
Joel Kurian
period 6 - C++/JAVA A
snelson
pg 121 # 12
*/
int main()
{
    char character;
    cout << "Enter a lowercase letter: ";
    cin >> character;
    if (character >= 'a' && character <= 'z')
    {
       character = character - 32;
       cout << "The uppercase version of the entered letter is " << character << '\n';
    }
    else
    {
       cout << "You didn't follow the directions.\n";
    }
    system("PAUSE");
    return 0;
} 
