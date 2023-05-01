/*
   Name:Michael Henson
   Class:csc1710-01
   Date:02/13/2020
   Path:/home/students/mhenson/csc1710/lab5/redirect.cpp

   Program Desc:
*/

#include<iostream>
#include <iomanip>

using namespace std;

int main ()
{
   //string's for the first and last names of the people
   string firstName, lastName, n1;
   //declaring doubles for the variables that needed to be calculated with
   //other data in the program
   double n8, n6, n7, cost, avg,n2, n3, n4, paycheck, amt;
   //making the user input data for the strings and doubles
   cin >> firstName;
   cin >> lastName;
   cin >> n1;
   cin >> n2;
   cin >> n3;
   cin >> n4;
   cin >> n6;
   cin >> n7;
   cin >> n8;
   cin >> cost;
   //creates 2 spaces after the double variables
   cout << fixed << setprecision(2);
   //outputing the message along wih the input from the user
   cout << "\n";
   cout << "My first name is " << firstName << " " << lastName;
   cout << ", Department: "<< n1 << endl;
   cout << "Monthly Gross Salary: $" << n2; 
   cout << ", Monthly Bonus: " << n3 << "%"; 
   cout << ", Taxes: " << n4 << "%"<< endl;
   //paycheck calculations with the user's data
   paycheck = (n2/.05)/(n2 * .03); 
   cout << "Paycheck: $" << paycheck << endl;
   cout << "\n";
   cout << "\n";
   cout << "Distance Traveled: "<< n6 << " miles, ";
   cout << "Traveling Time: "<< n7 << " hours"<<endl;
   //getting the average speed from dividing the Disatance travel by the 
   //traveling time
   avg = (n6/n7);
   cout << "Average Speed: "<< avg<< " miles per hour"<<endl;
   cout << "\n";
   cout << "\n";
   cout << "Number of Coffee Cups: " << n8<< ", ";
   cout << "Cost: $" << cost<< " per cup"<<endl;
   //Sales amount calculated by multiplying the Coffee cups by the cost per cup
   amt = (n8 * cost);
   cout << "Sales Amount = $" << amt<<endl;

return 0;
}
