#include<iostream>
#include<string>
using namespace std;
void reverse(char str[100],int index,int length);
int main()
{
	char strr[100],test[100];
	int i,count;
	count=0;
	cout<<"Enter a string: ";
	gets(strr);
	i=0;
	while(strr[i]!='\0')
	{
		count++;
		i++;
		test[i]=strr[i];
	}
	int count1=count;
	cout<<"Input string is:\n";
	reverse(strr,0,count-1);
	i=0;
	int c=0;
	while(strr[i]!='\0')
	{
		if(strr[i]==test[i])
		{
			c++;
			i++;
		}
	}
	if(c==count1)
	{
		cout<<"Palindrome";
	}	
	else
		cout<<"Not a palindrome";
	return 0;
}
void reverse(char str[100],int i,int n)
{
	char temp;
	temp=str[i];
	str[i]=str[n-i];
	str[n-i]=temp;
	if(i==n/2)
	return;
	reverse (str,i+1,n);	
}
