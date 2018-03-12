#include<iostream>
using namespace std;
struct emp
{
	int id;
	char name[50];
	float salary;
};
int main()
{
	int n;
	cout<<"enter the number of employees whose details you want to enter";
	cin>>n;
	emp e[n];
	for(int i=0;i<n;i++)
	{
		cout<<"\nenter the employee id";
		cin>>e[i].id;
		cout<<"\nenter the employee name";
		cin>>e[i].name;
		cout<<"\nenter the salary of employee";
		cin>>e[i].salary;	
	}	
	cout<<"\nDetails of employee";
	for(int i=0;i<n;i++)
	{
		cout<<"\nEmployee id = "<<e[i].id;
		cout<<"\nEmployee name = "<<e[i].name;
		cout<<"\nEmployee salary = "<<e[i].salary;
	}
}

