/*
Name: Michael Henson
Date: 01/23/2020
Class: Csc1710-01
Pathway: /home/student/mhenson/csc1710/lab2/bills.cpp

Program Desc: Calculating the Total Amount of Bills
*/

#include<iostream>

using namespace std;

int main ()
{
   //declaring  dollar bill variables for all 4 dollar bills	
   int bills1, bills5, bills10, bills20, total;

   //asking the user to input a number for each of the different dollar bills 
   cout << "Enter number of $1 bills: ";
   cin >> bills1;
		
   cout << "Enter number of $5 bills: ";
   cin >> bills5;
	
   cout << "Enter number of $10 bills: ";
   cin >> bills10;

   cout << "Enter number of $20 bills: ";
   cin >> bills20;

   //caluclating the amount for each different bill by multiplying them
   bills1 = 1 * bills1;
   bills5 = 5 * bills5;
   bills10 = 10 * bills10;
   bills20 = 20 * bills20;
   
   //calculating bills1, bills5, bills10, and bills20 by adding them together 
   total = bills1 + bills5 + bills10 + bills20;
   
   //outputing the total number of money
   cout << "Your Total number of bills is: $" << total <<endl;

return 0;
}
