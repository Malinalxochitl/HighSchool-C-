#include <iostream.h>
#include <cstdlib>
/*
Joel Kurian
period 6 - C++/JAVA A
snelson
pg 121 # 9
*/
int main()
{
    char character;
    cout << "Enter a lowercase letter: ";
    cin >> character;
    if (character >= 'a' && character <= 'z')
    {
       int position;
       position = character - 'a' + 1;
       cout << "The letter " << character << "'s position in the alphabet is " << position << '\n';
    }
    else
    {
       cout << "You didn't follow the directions.\n";
    }
    system("PAUSE");
    return 0;
}
