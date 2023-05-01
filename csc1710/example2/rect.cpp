/*
 Michael Henson
01/20/2020
Csc1710
/home/student/mhenson/csc1710/example2/ex1-1.cpp
*/

#include<iostream>

using namespace std;

int main ()
{
int length, width, perimeter, area;

	cout << "Enter the Length/Width of a "<<endl;
	cout << "rectangle. Values must be integers."<<endl;
	cout << "length: ";
	cin >> length;
	cout << "width: ";
	cin >> width;


perimeter = 2*(length + width);
area = length * width;

	cout << "rectangle info "<<endl;
	cout << "length: "<<length <<endl;
	cout << "width: "<<width <<endl;
	cout << "perimeter: " <<perimeter <<endl;
	cout << "area: " <<area <<endl;
return 0;

}
	


