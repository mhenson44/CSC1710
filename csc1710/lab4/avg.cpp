/*
   Name: Michael Henson
   Class: Csc1710
   Date: 02/06/2020
   Path: /home/students/mhenson/csc1710/lab4/avg.cpp

   Program Desc: Averaging the final average of a program, Test and Exam grades.
*/

#include<iostream>

using namespace std;

int main ()
{
   //declaring program Score, test score and example as variables. Making the average a float so it can output a decimal for the average grade.
   int programScore, testScore, examScore;
   float average;
   
   //asking the user to input the grades for each of the different scores
   cout << "Enter Program Score: ";
   cin >> programScore;
   cout << "Enter Test Score: ";
   cin >> testScore;
   cout << "Enter Final Exam Score: ";
   cin >> examScore;
   cout << "\n";
   //finding the average of all three scores by adding all of the numbers inputted by the user and dividing by 3.0 because it's a float,then outputing the average on the screen.
   average = (programScore + testScore + examScore)/3.0;
   cout << "Your Final Average is: "<< average<<endl;

return 0;
}
