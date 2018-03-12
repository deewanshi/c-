#include<iostream>
using namespace std;
void swap(int *a,int *b);
int main()
{
	int x,y;
	cout<<"Enter first number: ";
	cin>>x;
	cout<<"Enter second number: ";
	cin>>y;
	cout<<"Numbers after swapping are\n";
	swap(&x,&y);
	return 0;
}
void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	cout<<"First: "<<*a<<"\n"<<"Second: "<<*b;
}
