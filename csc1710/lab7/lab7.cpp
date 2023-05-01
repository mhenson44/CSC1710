/*
   Name:Michael Henson
   Date:02/27/2020
   Class:Csc1710-01
   Path:/home/students/mhenson/csc1710/lab7/lab7.c

   Program Desc: Using for loops

   1. The output is the number that the user enters, 28, being outputted in 
   the last 2 spaces in the four spaces(____) and same with the number 13 
   being ouputted in the last two spaces of the four spaces (____).
   
   2. If the user enters the character 'D', it will be outputted on the screen
   in it's binary form.

   3. If the user enters the character 'm', it will be outputted on the screen 
   in it's hexidecimal form.

   4. The output is the values, starting at 0 and going to keep incrementing 
   the value by one until the condition of value is less than 5 is false.

   5. The output will be the integer, i, being decreased by 1 each time 
   until the condition of , I > 5, is false. 

   6. The character in the loop will be incremented by 1 each time the code is
   ran and will keep running until the condition of ch <= 'M' is false, 
   meaning it will keep going up in the alphabet until it gets to the letter M.

   7. There is no output because the program fails after the first input.

   8. i|sum
      1  2
      2  3
      3  4
      4  5
      5  6
      6  7
      The sum is 7

   9.B

   10.There would be no output because if 4 was put in for the first for loop, 
   it would be false and fail because 4 is not less than 2. The second for 
   loops also doesn't ask for a input. 
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
   //declaring all needed variables
   int i, x, power;
   //asking the user for the value that power will be.
   cout << "Enter a number: ";
   cin >> x;
   power = x;
   //title of the power table
   cout << "   Powers of " << power << endl;
   cout << "      base 10   base 16"<<endl;
   //WARNING: Program will NOT work if the values are larger than the ones you 
   //identify
   //for loop that asks the user for the i value (1 through 10), which is 
   //basically where the program stops the calculations
   for(i = 1; i<=10; i++)
   {
   //prints out the different columns with the different values
      cout << setw(3)<< dec<< i;
      cout << setw(12) << dec << power;
      cout << hex <<setw(10)<< static_cast<int>(power) << endl;
   //calculations for base 10 calculations
      power = power * x; 
    
   }
return 0;
}
