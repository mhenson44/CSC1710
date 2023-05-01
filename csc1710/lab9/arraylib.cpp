/*
   Name:Michael Henson  
   Class:Csc1710-01
   Date:04/17/20
   Path:/home/students/mhenson/csc1710/P4/arraylib.cpp

   Program Desc: Array and Multifiles 

*/

#include<iostream>
#include<iomanip>

using namespace std;


   void load(int array[ ], int &cnt)
{
   cin >> cnt;
   for(int i = 0; i<cnt; i++)
      cin >> array[i];
}
   void print (int array [], int cnt)
{
      for(int i = 0; i<cnt; i++)
         cout << setw(5) << array[i];
      
      cout << endl;
}
