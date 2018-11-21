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
MP 2 Benchmark
*/
int main()
{
    void take_quiz(char[]);
    int i;
    char name[80];
    cout << "Hello! Today you will be taking a quiz.\n"
         << "This quiz will be on chapters 7, 8, and 9.\n"
         << "Please enter your full name: ";
    cin.getline(name, 80);
    cout << "Hello ";
    for (i = 0;name[i] != '\0';i++)
    {
        cout << name[i];
    }
    cout << "! Pleased to meet you!";
    take_quiz(name);
}                                                                                
                                                                                
void take_quiz(char name[])
{
     int i;
     int j = 0;
     char quiz_results[6] = "";
     void grade_quiz(char[], char[]);
     cout << " Now we will start the quiz.\n"
          << "Please enter either a, b, c, or d to answer the questions.\n"
          << "This quiz will be on pointers, arrays, and string functions.\n"
          << "There are six questions and 4 choices for each question.\n"
          << "Good luck, ";
     for (i = 0;name[i] != '\0';i++)
     {
         cout << name[i];
     }
     cout << "!\n\n";
     cout << "1. What is the name of the location where a value is stored in an array?\n"
          << "   A. Element\n"
          << "   B. Subscript\n"
          << "   C. Location\n"
          << "   D. Data\n";
     cin >> (quiz_results[j]);
     cout << '\n';
     quiz_results[j] = tolower(quiz_results[j]);
     if (quiz_results[j] != 'a' && quiz_results[j] != 'b' && quiz_results[j] != 'c' && quiz_results[j] != 'd')
     {
         while (quiz_results[j] != 'a' && quiz_results[j] != 'b' && quiz_results[j] != 'c' && quiz_results[j] != 'd')
         {
               cout << "Please enter a valid answer (a, b, c, or d):\n";
               cin >> (quiz_results[j]);
               quiz_results[j] = tolower(quiz_results[j]);
         }
         cout << '\n';
     }
     j++;
     cout << "2. Which of these array declarations is correct?\n"
          << "   A. int array[20][5];\n"
          << "   B. float numb[] = {20.5, 12.3, 32};\n"
          << "   C. All of the above\n"
          << "   D. None of the above\n";
     cin >> (quiz_results[j]);
     cout << '\n';
     quiz_results[j] = tolower(quiz_results[j]);
     if (quiz_results[j] != 'a' && quiz_results[j] != 'b' && quiz_results[j] != 'c' && quiz_results[j] != 'd')
     {
         while (quiz_results[j] != 'a' && quiz_results[j] != 'b' && quiz_results[j] != 'c' && quiz_results[j] != 'd')
         {
               cout << "Please enter a valid answer (a, b, c, or d):\n";
               cin >> (quiz_results[j]);
               quiz_results[j] = tolower(quiz_results[j]);
         }
         cout << '\n';
     }
     j++;
     cout << "3. What are addresses stored as?\n"
          << "   A. Decimal\n"
          << "   B. Integer\n"
          << "   C. Integer\n"
          << "   D. Hexadecimal\n";
     cin >> (quiz_results[j]);
     cout << '\n';
     quiz_results[j] = tolower(quiz_results[j]);
     if (quiz_results[j] != 'a' && quiz_results[j] != 'b' && quiz_results[j] != 'c' && quiz_results[j] != 'd')
     {
         while (quiz_results[j] != 'a' && quiz_results[j] != 'b' && quiz_results[j] != 'c' && quiz_results[j] != 'd')
         {
               cout << "Please enter a valid answer (a, b, c, or d):\n";
               cin >> (quiz_results[j]);
               quiz_results[j] = tolower(quiz_results[j]);
         }
         cout << '\n';
     }
     j++;
     cout << "4. What is the proper way to create a pointer to an integer?\n"
          << "   A. int *x = &s;\n"
          << "   B. int &f = *q;\n"
          << "   C. int *w = g;\n"
          << "   D. int &b = y;\n";
     cin >> (quiz_results[j]);
     cout << '\n';
     quiz_results[j] = tolower(quiz_results[j]);
     if (quiz_results[j] != 'a' && quiz_results[j] != 'b' && quiz_results[j] != 'c' && quiz_results[j] != 'd')
     {
         while (quiz_results[j] != 'a' && quiz_results[j] != 'b' && quiz_results[j] != 'c' && quiz_results[j] != 'd')
         {
               cout << "Please enter a valid answer (a, b, c, or d):\n";
               cin >> (quiz_results[j]);
               quiz_results[j] = tolower(quiz_results[j]);
         }
         cout << '\n';
     }
     j++;
     cout << "5. What header is needed for string library functions?\n"
          << "   A. ctype.h\n"
          << "   B. stdlib.h\n"
          << "   C. string.h\n"
          << "   D. math.h\n";
     cin >> (quiz_results[j]);
     cout << '\n';
     quiz_results[j] = tolower(quiz_results[j]);
     if (quiz_results[j] != 'a' && quiz_results[j] != 'b' && quiz_results[j] != 'c' && quiz_results[j] != 'd')
     {
         while (quiz_results[j] != 'a' && quiz_results[j] != 'b' && quiz_results[j] != 'c' && quiz_results[j] != 'd')
         {
               cout << "Please enter a valid answer (a, b, c, or d):\n";
               cin >> (quiz_results[j]);
               quiz_results[j] = tolower(quiz_results[j]);
         }
         cout << '\n';
     }
     j++;
     cout << "6. What happens to a value for a pointer array after it is changed?\n"
          << "   A. It is overwritten in the same address\n"
          << "   B. ONLY a new address is created for the new value\n"
          << "   C. A new address is created, AND the old one is deleted\n"
          << "   D. The value cannot be changed\n";
     cin >> (quiz_results[j]);
     cout << '\n';
     quiz_results[j] = tolower(quiz_results[j]);
     if (quiz_results[j] != 'a' && quiz_results[j] != 'b' && quiz_results[j] != 'c' && quiz_results[j] != 'd')
     {
         while (quiz_results[j] != 'a' && quiz_results[j] != 'b' && quiz_results[j] != 'c' && quiz_results[j] != 'd')
         {
               cout << "Please enter a valid answer (a, b, c, or d):\n";
               cin >> (quiz_results[j]);
               quiz_results[j] = tolower(quiz_results[j]);
         }
         cout << '\n';
     }
     grade_quiz(name, quiz_results);                                 
}

void grade_quiz(char name [], char quiz_results [])
{
     char answer_key[6] = {'a', 'c', 'd', 'a', 'c', 'b'};
     int i = 0;
     int counter;
     int wrong_answers[6] = {0, 0, 0, 0, 0, 0};
     int j = 0;
     void student_feedback(int, int[], char[]);
     while(i < 6)
     {
           if (quiz_results[i] != answer_key[i])
           {
               i++;
               wrong_answers[j] = i;
               i--;
               j++;
           }
           i++;
     }
     i = 0;
     for (counter = 6; wrong_answers[i] != 0;counter--){i++;}
     student_feedback(counter, wrong_answers, name);
}

void student_feedback(int num_right, int wrong_answers[], char name[])
{
}
                                                                                
                                                                                // 1. What is the name of the location where a value is stored in an array?
                                                                                //    A. Element - correct
                                                                                //    B. Subscript
                                                                                //    C. Location
                                                                                //    D. Data
                                                                                // 2. Which of these array declarations is correct?
                                                                                //    A. int array[20][5];
                                                                                //    B. float numb[] = {20.5, 12.3, 32};
                                                                                //    C. All of the above - correct
                                                                                //    D. None of the above
                                                                                // 3. What are addresses stored as?
                                                                                //    A. Decimal
                                                                                //    B. Integer
                                                                                //    C. Characters
                                                                                //    D. Hexadecimal - correct
                                                                                // 4. What is the proper way to create a pointer to an integer?
                                                                                //    A. int *x = &s; - correct
                                                                                //    B. int &f = *q;
                                                                                //    C. int *w = g;
                                                                                //    D. int &b = y;
                                                                                // 5. What header is needed for string library functions?
                                                                                //    A. ctype.h
                                                                                //    B. stdlib.h
                                                                                //    C. string.h - correct
                                                                                //    D. math.h
                                                                                // 6. What happens to a value for a pointer array after it is changed?
                                                                                //    A. It is overwritten in the same address
                                                                                //    B. ONLY a new address is created for the new value - correct
                                                                                //    C. A new address is created, AND the old one is deleted
                                                                                //    D. The value cannot be changed
