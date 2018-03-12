#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number of employees whose details you want to enter";
	cin>>n;
	int id[n];
	char name[n][50];
	float salary[n];
	for(int i=0;i<n;i++)
	{
		cout<<"\nenter the employee id";
		cin>>id[i];
		cout<<"\nenter the employee name";
		cin>>name[i];
		cout<<"\nenter the salary of employee";
		cin>>salary[i];	
	}	
	cout<<"\nDetails of employee";
	for(int i=0;i<n;i++)
	{
		cout<<"\nEmployee id = "<<id[i];
		cout<<"\nEmployee name = "<<name[i];
		cout<<"\nEmployee salary = "<<salary[i];
	}
}

