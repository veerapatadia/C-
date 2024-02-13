#include<iostream>
using namespace std;
class X
{
	public:

		int a,b,c,sum,cube,A,B,C;
};
class Y : public X
{
	public:
		
		setData()
		{
			cout<<"Enter the value of a=";
			cin>>a;
			cout<<"Enter the value of b=";
			cin>>b;
			cout<<"Enter the value of c=";
			cin>>c;
			cout<<endl;
		}
		getData()
		{
			A=a*a*a;
			B=b*b*b;
			C=c*c*c;
			cout<<"Cube of a="<<A<<endl;
			cout<<"Cube of b="<<B<<endl;
			cout<<"Cube of c="<<C<<endl;
			cout<<endl;
				
			sum=(A+B+C);
			cout<<"Sum of cube="<<sum<<endl;
			
		}	
	
};
int main()
{
	Y Y1;
	
	Y1.setData();
	Y1.getData();
	
	return 0;	
}
