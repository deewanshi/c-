#include<iostream>
#include<string>
using namespace std;
class vehicle
{
	int vehicleid;
	public:
	vehicle(int x)
	{
		vehicleid=x;
		}	
};
class car : public vehicle
{
	int speed,weight;
	public:
		car(int x,int y)
		{
			speed=x;
			weight=y;
		}
		void info()
		{
			cin>>vehicleid;
		}
		void show()
		{	
			cout<<"Regid= "<<vehicleid;
			cout<<"Speed and weight of car are as:\nSpeed: "<<speed<<"\nWeight: "<<weight;
		}
		
};
class motorcycle : public vehicle
{

	public:
		void show()
		{
			
			}	
};


