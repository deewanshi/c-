#include<iostream>
using namespace std; 
int main() 
{  
  float ht,inch,feet,cm; 
  char unit[10];
  cout<<"Enter your height: "; 
  cin>>ht;
  cout<<"Enter unit(cm/feet): ";
  cin>>unit; 
  if(unit=="cm")
  {
  
  feet=ht/30.48;   
  inch=ht/2.54;
  cout<<"Height in feets : "<<feet;
  cout<<"Height in inch : "<<inch; 
	}
	else
	{
		cm=30.48*ht;
		cout<<"Height in cm: "<<cm;
	}
  return 0; 
} 
