#include<iostream>
using namespace std;
int main()
{
	int i,n,fact=1,v[30];
	
	cout<<"Enter the number=";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		cout<<"v["<<i<<"]="<<i<<endl;
	}
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"Factorial="<<fact;
	
	return 0;
}
