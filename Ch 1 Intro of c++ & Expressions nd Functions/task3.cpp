#include<iostream>
using namespace std;
int main()
{
	int x,y,z,i=0,n;
	
	for(x=2020;x<=3030;x++)
	{
		if(x%4==0)
		{
			n++;
		}
	}
	int array[n];
	for(x=2020;x<=3030;x++)
	{
		if(x%4==0)
		{
			array[i]=x;
			i++;
		}
	}
	cout<<"Leap year:"<<endl;
	
	for(y=0;y<n;y++)
	{
		cout<<"x["<<y<<"]:"<<array[y]<<endl;
		
	}
	return 0;
}
