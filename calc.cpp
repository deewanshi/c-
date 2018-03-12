#include<iostream>
using namespace std;
int main()
{
	int a,b,res,flag,mod;
	char c;
	flag=0;
	do{
		cout<<"\nEnter first number: ";
		cin>>a;
		cout<<"\nEnter second number: ";
		cin>>b;
		cout<<"\nOperations:";
		cout<<"\n+) Addition";
		cout<<"\n-) Subtraction";
		cout<<"\n*) Multiplication";
		cout<<"\n/) Division";
		cout<<"\nEnter your operator of choice: ";
		cin>>c;
		switch(c)
		{
			case '+':
				res=a+b;
				cout<<"\n"<<a<<" + "<<b<<" gives "<<res;
			break;
			case '-':
				cout<<"\nWant to subtract "<<a<<" from "<<b<<" ?";
				cout<<"\n Press 1 for yes and 0 for subtracting "<<b<<" from "<<a;
				cout<<": ";
				cin>>flag;
				if(flag==1)
				{
				
					res=b-a;
					cout<<"\n"<<b<<" - "<<a<<" gives: ";
				}
				else
				{
				
					res=a-b;
					cout<<"\n"<<a<<" - "<<b<<" gives: ";
				}
				cout<<"\n"<<res;
			
			break;
			case '*':
				res=a*b;
				cout<<"\n Product of "<<a<<" and "<<b<<" is "<<res;
			break;
			
			case '/':	
				cout<<"\nWant to divide "<<a<<" by "<<b<<" ?";
				cout<<"\n Press 1 for yes and 0 for dividing "<<b<<" by "<<a<<": ";
				cin>>flag;
				if(flag==1)
				{
				
					res=a/b;
					mod=a%b;
					cout<<a<<"/"<<b<<" gives: ";
				}
				else
				{
				
					res=b/a;
					mod=b%a;
					cout<<b<<"/"<<a<<" gives: ";
				}
				cout<<"\nQuotient: "<<res<<"\n Remainder: "<<mod;
			break;
			default:
				cout<<"\nNo such choice";
		}
		cout<<"\nWant to continue? ";
		cout<<"\nPress y or Y for yes: ";
		cin>>c;
	}
	while(c=='y'||c=='Y');
	return 0;
}
