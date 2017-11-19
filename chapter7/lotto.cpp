//lotto.cpp --odds against winning
#include<iostream>
using namespace std;

//Note: Some implementations require double instead of long double 
long double odds(unsigned numbers, unsigned picks);
int main()
{
	double total, choices;
	cout<< "Enter total number of game card choices and \n"
		"number of picks allowed: \n";
	while((cin>> total >> choices) && choices<= total)
	{
		cout<< "You have one chance in ";
		cout<< odds(total, choices); //compute the odds
		cout<< "of winning.\n";
		cout<< "Next two numbers (q to quit): ";
	}
	cout << "Bye\n ";
	return 0;
}

//the following function calculates the odds of picking picks 
//numbers correctly from numbers choices
long double odds(unsigned numbers, unsigned picks)
{
	long double result = 1.0; //here comes some local variables
	long double n;
	unsigned p;

	for(n = numbers, p= picks; p>0; n--,p--)
	{
		result = result*n/p;
	}
	return result;
 }

