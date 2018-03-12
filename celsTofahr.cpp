#include<iostream>
using namespace std;
int main()
{
	float temp,f;
	char unit;
	cout<<"Enter the temperature: ";
	cin>>temp;
	cout<<"Enter the unit (c/C or f/F) in which your temperature is: ";
	cin>>unit;
	if(unit=='c'||unit=='C')
	{
		f=(temp*1.8)+32.0;	
		cout<<"Temperature in Fahrenheit ="<<f;
	}
	else
	{
		f=(temp-32.0)/1.8;
		cout<<"Temperature in Celsius = "<<f;
	}
	return 0;
}

