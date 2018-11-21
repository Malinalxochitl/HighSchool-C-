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
Chapter: 9
Page: 320 #2
*/
int main()
{
        char strng[80]; //array declarations
        int numbers[5];
        void vowels(char[], int[]); //prototype
        cout << "Enter a sentence: ";
        cin.getline(strng,80); //array string input
        vowels(strng, numbers); //function
        cout << "\nThere are " << numbers[0] << " a's in the sentence."
             << "\nThere are " << numbers[1] << " e's in the sentence."
             << "\nThere are " << numbers[2] << " i's in the sentence."
             << "\nThere are " << numbers[3] << " o's in the sentence."
             << "\nThere are " << numbers[4] << " u's in the sentence.\n";
        system("PAUSE");
        return 0;
}

void vowels (char strng[], int numbers[])
{
     int i = 0;
     char c;
     numbers[0] = 0;
     numbers[4] = 0;
     while ((c = strng[i++]) != '\0') //ends when it reaches the termination character, and makes 'c' into the string character
     {
      switch(c)
               {
                             case 'a':
                                  numbers[0] = numbers[0] + 1;
                                  cout << c;
                                  break;
                             case 'e':
                                  numbers[1] = numbers[1] + 1;
                                  cout << c;
                                  break;
                             case 'i':
                                  numbers[2] = numbers[2] + 1; //stores # of vowels and displays it
                                  cout << c;
                                  break;
                             case 'o':
                                  numbers[3] = numbers[3] + 1;
                                  cout << c;
                                  break;
                             case 'u':
                                  numbers[4] = numbers[4] + 1;
                                  cout << c;
                                  break;
               } 
      }
}        
