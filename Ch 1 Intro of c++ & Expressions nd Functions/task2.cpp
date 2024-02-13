#include<iostream>
using namespace std;
int main()
{
	int i,n;
	char name[50];
	
	cout<<"Enter name length=";
	cin>>n;
	
	cout<<"Enter any name=";
	cin>>name;
	
	for(i=0;i<n;i++)
	{
		if(name[i]>=65 && name[i]<=90)
		{
			name[i]=name[i]+32;
		}
		else if(name[i]>=97 && name[i]<=122)
		{
			name[i]=name[i]-32;
		}
	}
	cout<<"Tooglecase="<<name;
	
	return 0;
}
