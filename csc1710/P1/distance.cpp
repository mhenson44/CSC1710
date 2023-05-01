/*
   Name: Michael Henson
   Class: Csc1710
   Date: 02/05/2020
   Path: /home/students/mhenson/csc1710/P1/distance.cpp

   Program Desc: Finding the distance of a falling object by using
   the distance formula
*/

#include<iostream>

using namespace std;

int main ()
{
   //declaring the acceleration as a integer and the distance and time
   //as float in order to be able to input decimal values of seconds
   int accel;
   float distance, time;
   //asking the user to put in a number of secondsof how long the object
   //is falling that will go into the calulation of the distance
   cout << "Enter amount of seconds: ";
   cin >> time;
   cout << "\n";
   //giving the acceleration a value of 32 feet in order to be able
   //to caluclate the distance
   accel = 32;
   //the distance forumula that multiplies the acceleration by time squared,
   //in which i multiplied it by time twice because you can't square, then
   //divided it byt 2.0 so that the feet can get decimal feet to make it more
   //accurate
   distance = accel * (time * time)/2.0;
   //outputing the message and the distance of the object dropping from the
   //caluclations
   cout << "The object dropped a distance of: " << distance << " ft"<< endl;

return 0;
}
