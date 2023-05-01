/*
   Name:Michael Henson  
   Class:Csc1710-01
   Date:02/21/2020
   Path:/home/students/mhenson/csc1710/P2/paycheck.cpp

   Program Desc: Output statistics on an employee’s monthly paycheck. 
*/

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main ()
{
   //declaration of the components of the paycheck
   ifstream inFile;
   ofstream outFile;
   string inName, outName;   
   string firstName, lastName, n1;
   double monthS,taxes, bonus, insur, paycheck;
   char ans; 
   /*cout << "Enter a file name: ";
   cin >> inName;
   inFile.open(inName);
   cout << "Enter a file name: ";
   cin >> outName;
   outFile.open(outName);
   */
   //asking user for name, department and if they have insurance
   cout << "Enter Employee's name: "<<firstName <<lastName<<endl;
   cin >> firstName;
   cin >> lastName;
   cout << "What Department do they work in? "<< n1<<endl;
   cin >> n1;
   cout << "Does the employee have insurance (y/n)?"<<endl;
   cin >> ans;
   inFile >> monthS;
   inFile >> bonus;
   inFile >> taxes;
   inFile >> insur;
   inFile >> paycheck;
  
   //calculation of the bonus and declaring the value of the salary
   monthS = 5612.33;
   bonus = (monthS*.055); 
   //yes or no if statement for the insurance
   if (ans == 'y')
   insur = 192.00;
   else
   insur = 0;
   //More calculations for taxes and sum of all the values for the paycheck 
   taxes = (monthS + bonus) * .225;
   paycheck =( monthS + bonus) - (taxes + insur);
   //paycheck screen output
   cout << "\n";
   cout << fixed << setprecision(2);
   cout << "              Your Paycheck:                "<< endl;
   cout << "++++++++++++++++++++++++++++++++++++++++++++"<< endl;
   cout << "Name:. . . . . . . . . . . ." << firstName << " "<<lastName << endl;
   cout << "Department:. . . . . . . . . . . ." << n1<< endl;
   cout << "Monthly Gross Salary:. . . . . . .$  " << monthS<< endl;
   cout << "Monthly 5.50% Bonus: . . . . . . .$   "<< bonus << endl;
   cout << "Taxes at 22.50%: . . . . . . . . .$  " << taxes << endl;
   cout << "Insurance: . . . . . . . . . . . .$   "<< insur << endl;
   cout << "Paycheck:. . . . . . . . . . . . .$  " << paycheck << endl;
   cout << "++++++++++++++++++++++++++++++++++++++++++++";
   cout << "\n";
return 0;

}



