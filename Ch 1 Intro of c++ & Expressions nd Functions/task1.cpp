#include<iostream>
using namespace std;
int main()
{
	int v[50],i,n;
	
	cout<<"Enter the size of array=";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cout<<"v["<<i<<"]=";
		cin>>v[i];
	}
	for(i=0;i<n;i++)
	{
		if(v[i]%2==0)
		{
			cout<<v[i]<<endl;
		}
		
	}
	return 0;
}
