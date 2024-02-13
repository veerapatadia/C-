#include<iostream>
using namespace std;

int main()
{
	int a=5;
	int b=0;
	int sum;
	
	try{
		if(b==0)
		{
			throw 5;
		}
		sum=a/b;
		cout<<"Division of a&b ="<<sum;
	}
	catch(int n)
	{
		cout<<"Cannot divide by "<<n;
	}
	catch(float n)
	{
		cout<<"Can't divide by"<<n;
	}
	catch(double n)
	{
		cout<<"Can't divide "<<n;
	}
	catch(...)
	{
		cout<<"Error";
	}
	return 0;
}
