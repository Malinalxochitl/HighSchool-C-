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
Page: 320 #8
*/
int main()
{
       char strng[80];
       cout << "Enter a sentence to be yoloswegged: "; //gets a sentence
       cin.getline(strng, 80);
       int  sospoopy;
       cout << "Enter where in the sentence the yoloswegging will happen: "; //gets the position
       cin >> sospoopy;
       char addition[80] = {"#YOLOSWEG"}; //the yoloswegginator
       char final[80]; //the final outsome
       int  i;
       void add_char(char[], char[], int, char[]); //prototype
       add_char(strng, addition, sospoopy, final); //calls function
       for (i = 0;final[i] != '\0';i++)
       {
           cout << final[i]; //displays the yoloswegginated sentence
       }
       cout << '\n';
       system("PAUSE");
       return 0;
}

void add_char (char orig[], char add[], int pos, char finel[])
{
     int i = 0;
     int j = 0; //counter variables
     int p = 0;
     for (i = 0;orig[i] != '\0';i++) //loops to put in the orignal string
     {
         if (i == pos) //checks for the right position
         {
               for (p = 0;add[p] != '\0';p++) //puts in the yolosweg
               {
                   finel[j] = add[p];
                   j++;
               }
         }
         finel[j] = orig[i];
         j++;
     }   
}
