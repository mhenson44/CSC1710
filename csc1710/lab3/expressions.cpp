/*
   Name:Michael Henson
   Date:01/20/2020
   Class:Csc1710-01
   Location: /home/students/mhenson/csc1710/lab3/expression.cpp

   Program Desc: Reading in two integer values as variables v1 and v2, not prompting the user for inputs.
*/

#include<iostream>

using namespace std;

int main ()
{
   //declaring all 6 variables for both the user to to enter and the total for the 'e' variables 
   int v1, v2, e1 , e2 , e3 , e4;
   //askng the user to input two integer values for v1 and v2
   cout << "Enter value for v1: ";
   cin>> v1;
   cout << "Enter value for v2: ";
   cin >> v2;
   cout << "\n";
   //calculating the 4 'e' totals for the math expressions
   e1 = v1 + 5 * v2/3 * v1;
   e3 = v1 + ((5 * v2) / (3 * v1));
   e2 = v1 + (5 * (v2/3)) * v1;
   e4 = (v2 % v1) % (v2/v1);
   //prints the output of the values that the user put in for v1 and v2, along with the answers to the4 expressions
   cout<< "v1 = "<< v1<< " and v2 = "<<v2<<endl;
   cout<< "Expression values are:"<<endl;
   cout<< "e1 =  "<<e1<< ", e2 =  "<<e2<< ", e3 =  "<<e3<< " and e4 =  "<<e4<<endl;

return 0;
}

 
   
