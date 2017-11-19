// protos.cpp -- use prototypes and function calls
#include<iostream>
using namespace std;

void cheers(int);  //prototype no return value
double cube(double x); //prototype : Returns a variable
int main(void)
{
	double side=0;	
	cout << "Hello! This is my first C++ program with ubuntu";
	cheers(5);
	cout << "Give me a number: ";
	cin >> side;
	double volume= cube(side);  // function call
	cout << "A "<< side <<"-foot cube has a volume of";
	cout << volume << " cubic feet.\n";
	cheers(cube(2)); //prototype protection at work
	return 0;
}

void cheers(int n)
{
	for(int i=0; i<n; i++)
	cout<< "Cheers! Woop Woop!\n";
}

double cube(double x)
{
	return x*x*x;
}

