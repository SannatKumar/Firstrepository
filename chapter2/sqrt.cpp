//sqrt.cpp - use a square root function
#include<iostream>
#include<cmath> //or math.h

using namespace std;

int main()
{
	double cover;  //use double for numbers
	cout <<"How many square feet of sheets do you have?\n";
	cin >> cover;
	double side;  //create another variable
	side = sqrt(cover);  //call function, assign return value
	cout<< "You can cover a square with sides of "<<side;
	cout<< "feet\nwith your sheets.\n";
	return 0;
}
