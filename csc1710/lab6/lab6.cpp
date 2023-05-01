/*
   Name: Michael Henson
   Class: Csc1710
   Date: 02/06/2020
   Path: /home/students/mhenson/csc1710/lab6/lab6.cpp

   Program Desc: reads in the two averages and the final exam score from the keyboard
   (user input). With the three values, calculate the final average then determine the
   final letter grade. Output the quiz average, test average,
   final exam score, final average and the final letter grade.
   
   1. When Hello World is bein outputted, "Wow" is outputted
   on the screen.

   2. The code produces the string "yes" when n is less than 6 and 2 is less than
   n. The string "no" is produced whenever those values aren't true.
   
   3. It outputs hello if n is less than 4, but outputs goodbye when n is not less than 4

   4. D

   5. If statement A is true, making all of the other statements no needing to be 
   executed when A and B are false.

   6. Prints out "foo" because n = 5 which is freater than 0.

   7. That it is only executed if the if statement is false.
   
   8. if(x>y)
      z=0;

   9. if(z>70.0)
      letterGrade = 'P';
      else
      letterGrade = 'F';

   10. if(z>=88){
      letterGrade = 'A';
      }else if (z>75)&&(z<88){
      letterGrade = 'B';
      }else{
      letterGrade = 'C';
      } 
*/

#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int main ()
{
   //declaring the averages for the quizzes, tests and final average. Declared 
   //exam as an int because it wasn't a decimal and letter grade as a 
   //character to display the letter grade for the class
   double quizAvg, testAvg, finalAvg;
   int exam;
   char letterGrade;
   //initializing the quiz, test and exam, for the user to input data
   cin >> quizAvg;
   cin >> testAvg;
   cin >> exam;
   //calculating the final average of all three scores with their different
   // percentages
   finalAvg = (quizAvg*.1)+(testAvg*.65)+(exam*.25);
   //finding the letter grade for the output of the final average
   if(finalAvg >= 88){
      letterGrade = 'A';
   }else if((finalAvg < 88)&&(finalAvg >=75)){
      letterGrade = 'B';
   }else{
      letterGrade = 'C';
   }
   //outputing the averages and letter grade on the screen
   cout <<fixed <<setprecision(2);
   cout << "Quiz average:       "<<quizAvg<<endl;
   cout << "Test average:       "<<testAvg<<endl;
   cout << "Final exam score:   "<<exam<<endl;
   cout << "Final Average:      "<<finalAvg<<endl;
   cout << "Final letter grade: "<<letterGrade<<endl;
   
return 0;
}
