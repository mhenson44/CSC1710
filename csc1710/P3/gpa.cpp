/*
   Name: Michael Henson 
   Class:Cs1710
   Date:04/01/2020
   Path:/home/students/mhenson/csc1710/P3/gpa.cpp

   Program Desc:Gpa calculator
*/
#include <iomanip>
#include <fstream>
#include <bitset>

using namespace std;

int main ()
{
   string name;
   char grades;
   double average, gradeAvg=0, totP=0, gSum=0, highgpa=0;

   cin >> name;

   cout<<setw(20)<<setfill('=')<<" "<<endl;
   cout<<setw(9)<<setfill(' ')<<"NAME"<<setw(9)<<"GPA"<<endl;
   cout<<setfill('=')<<setw(20)<<" "<<endl;

   while(!cin.eof()){
   double sum , inc, hour, num;
   cin>>num;
   while(num>0)
   {
   cin>>hour;
   cin>>grades;
   inc+=hour;
      switch (grades){
      case 'A': return 4;
      case 'B': return 3;
      case 'C': return 2;
      case 'D': return 1;
      default: return 0;
      }

   num--;
   }

   cout<<setw(10)<<setfill(' ')<<name;
   cout<<setw(10)<<fixed<<setprecision(2)<<average<<endl;
   cin>>name;
   }
   cout<<setw(20)<setfill('=')<<" "<<endl;

   totP++;
   average = sum/inc;
   gSum+=average;
   gradeAvg=gSum/totP;



return 0;
}
