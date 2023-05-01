/*
   Name:Michael Henson
   Class:csc1710-01
   Date:02/13/2020
   Path:/home/students/mhenson/csc1710/lab5/redirect.cpp

   Program Desc: I/P Redirection and File I/O and outputing the info ofthe accountant's information. 
*/

#include<iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main ()
{
   //declared the variables for the input and output file
   // decalred strings for the accountants name and doubles for the numbers
   // and calculations
   ifstream inFile;
   ofstream outFile;
   string firstName, lastName, n1;
   double n8, n6, n7, cost, avg,n2, n3, n4, paycheck, amt;
   //opening the inData file and outData file
   inFile.open(“inData.txt”);
   outFile.open(“outData.txt”);
   //Using the data from the inFile to produce the input data for the calcuations
   inFile >> firstName;
   inFile >> lastName;
   inFile >> n1;
   inFile >> n2;
   inFile >> n3;
   inFile >> n4;
   inFile >> n6;
   inFile >> n7;
   inFile >> n8;
   inFile >> cost;
   //using the data from the file to output the correct data in the spots
   outFile << fixed << setprecision(2);
   outFile << "\n";
   outFile << "My first name is " << firstName << " " << lastName;
   outFile << ", Department: "<< n1 << endl;
   outFile << "Monthly Gross Salary: $" << n2;
   outFile << ", Monthly Bonus: " << n3 << "%";
   outFile << ", Taxes: " << n4 << "%"<< endl;
   //calculating the paycheck for the monthly salary of the person
   paycheck = (n2/.05)/(n2 * .03);
   outFile << "Paycheck: $" << paycheck << endl;
   outFile << "\n";
   outFile << "\n";
   outFile << "Distance Traveled: "<< n6 << " miles, ";
   outFile << "Traveling Time: "<< n7 << " hours"<<endl;
   //taking the average of the Distance traveled divided by the time traveled
   avg = (n6/n7);
   outFile << "Average Speed: "<< avg<< " miles per hour"<<endl;

   outFile << "\n";
   outFile << "\n";
   outFile << "Number of Coffee Cups: " << n8<< ", ";
   outFile << "Cost: $" << cost<< " per cup"<<endl;
   //The Sales amount of the number of cups times the cost of each cup
   amt = (n8 * cost);
   outFile << "Sales Amount = $" << amt<<endl;

   //closing both the input and output data files
   inFile.close();
   outFile.close();

return 0;
}
