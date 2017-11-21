#include<iostream>
using namespace std;

int main()
{
	int adcArray[32] = {250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 784, 825, 850, 875, 900, 925, 937, 950, 	975, 1000};
	float celsiusArray[32] = {1.4, 4.0, 6.4, 8.8, 11.1, 13.4, 15.6, 17.8, 20.0, 22.2, 24.4, 26.7, 29.0, 31.3, 33.7, 36.1, 38.7, 41.3, 44.1, 47.1, 50.2, 53.7, 55.0,61.5,66.2, 		71.5, 77.9, 85.7, 90.3, 96.0, 111.2, 139.5};	
	int thermistorValue=0;
	cout<< "Enter a value: ";
	cin>>thermistorValue;	
	float roomTemperature=0.0;
	bool rangeValidity=false;
	int count=0;
	while((count!=32 && rangeValidity == true))
	{
		cout<<adcArray[count];
		cout<<thermistorValue;
		if(thermistorValue<=adcArray[count])
		{
				roomTemperature = celsiusArray[count];
				rangeValidity=true;
				cout<<"What's going on";
				cout<<"This is the current "<< roomTemperature <<"room Temperature.";
		}
		count++;
			
	}
	
	return 0;
}
/*int SeparateDigit(float roomTemperature)
{
	
	int firstDigit=0;
	int secondDigit=0;
	if(roomTemperature>0 && roomTemperature<9)
	{
		firstDigit= roomTemperature;
		secondDigit = 0;
	}
	else
	{
		secondDigit= roomTemperature %10;
		firstDigit= (roomTemperature-secondDigit)/10;
	}
}
*/
