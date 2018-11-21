#include <iostream.h>
#include <cstdlib>
#include <math.h>
#include <iomanip.h>
#include <string.h>
#include <ctype.h>
/*
Student: Joel Kurian
Period: 6
Class: C++/JAVA A
Teacher: Mrs.Snelson
School: Randolph High School
Compiler: Dev-C++
Chapter: 9
Page: 328 #6
*/
int main()
{
    char message[80]; //declarations
    char so_doge;
    char final[80];
    int i;
    void remove(char [],char [], char); //prototype
    cout << "Enter a sentence: ";
    cin.getline(message, 80);                 //inputs from user
    cout << "Enter a character to remove from that sentence: ";
    cin.get(so_doge);
    remove(message,final,so_doge); //calls remove
    for (i = 0;message[i] != '\0';i++) //display
    {
        cout << message[i];
    }
    cout << '\n';
    system("PAUSE");
    return 0;
}

void remove(char g[80],char final[80], char jesus)
{
     int smeh = 0;
     int hurp = 0;
     while (g[hurp] != '\0')
     {
           if (g[hurp] == jesus)
           {
                  hurp++;
           }
           else
           {
                    final[smeh] = g[hurp];
                    smeh++;
                    hurp++;
           }
           
     }
}
