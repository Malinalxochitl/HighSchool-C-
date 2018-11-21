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
    char final[80] = "";
    int i;
    void remove(char [],char [], char); //prototype
    cout << "Enter a sentence: ";
    cin.getline(message, 80);                 //inputs from user
    cout << "Enter a character to remove from that sentence: ";
    cin.get(so_doge);
    remove(message,final,so_doge); //calls remove
    for (i = 0;final[i] != '\0';i++) //display
    {
        cout << final[i];
    }
    cout << '\n';
    system("PAUSE");
    return 0;
}

void remove(char orig[80],char finel[80], char jesus)
{
     int hurp = 0;
     int yarr_im_a_pirate = 0;
     while (orig[yarr_im_a_pirate] != '\0')
     {
           if (orig[yarr_im_a_pirate] == jesus) //checks for the special character
           {
                  yarr_im_a_pirate++; //skips the character
           }
           else
           {
               finel[hurp] = orig[yarr_im_a_pirate]; //assigns the original character into the new array
               yarr_im_a_pirate++; //increments the counter values
               hurp++;
           }
     }
}     
