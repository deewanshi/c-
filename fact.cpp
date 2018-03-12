#include<iostream>
using namespace std;
int factorial(int x);
int main()
{
	int a,n;
	cout<<"\tEnter a number: ";
	cin>>a;
	cout<<"\n\tFactorial of "<<a<<" is";
	n=factorial(a);
	cout<<" "<<n;
	return 0;
	
}
int factorial(int x)
{
	if(x==0||x==1)
		return 1;
	else
		return x*factorial(x-1);
}
