#include<iostream>
using namespace std;
int main()
{
	cout<<"Perfect numbers from 1 till 10000 are\n";
	int rem;
	for(int i=1;i<=10000;i++)
	{
		int arr=0;
		for(int j=1;j<i;j++)
		{
			rem=i%j;
			if(rem==0)
			{
				arr=arr+j;
			}
		}
		if(i==arr)
		{
			cout<<arr<<"\n";
		}
	}
	return 0;
}
