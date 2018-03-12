#include<iostream>
using namespace std;
int main()
{
	int lim;
	cout<<"\tEnter the limit: ";
	cin>>lim;
	int i,s,t,m;
	s=0;
	t=1;
	cout<<"\n\tFibonacci series till limit "<<lim<<" is: ";
	for(i=0;i<lim;i++)
	{
		cout<<s<<" ";
		m=s+t;
		s=t;
		t=m;	
	}
	return 0;
}
