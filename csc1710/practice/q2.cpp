#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
   int int1, int2;
   string inName, outName;
   ifstream inFile;
   ifstream outFile;
   
   cout<< "Enter input filename: ";
   cin >> inName;
   inFile.open(inName);
   cout<< "Enter output filename: ";
   cout >> outName;
   inFile.open(outName);
   
   infile >> int1 >> int2;
   if (int1 > int2)
   cout << "The Largest Integer is " << int1 << endl;
   else
   cout << "The Largest Integer is " << int2 << endl;
   
return 0;
}
