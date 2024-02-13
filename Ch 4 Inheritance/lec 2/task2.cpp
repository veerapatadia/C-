#include<iostream>
using namespace std;
class A
{
	public:
		int a;	
		dispA()
		{
			cout<<"Enter the value of a=";
			cin>>a;	
		}
	
};
class B:public A
{
	public:
		int b;	
		dispB()
		{
			cout<<"Enter the value of b=";
			cin>>b;	
		}	
};
class C:public A
{
	public:
		int c;	
		dispC()
		{
			cout<<"Enter the value of c=";
			cin>>c;	
		}	
};
class D:public B,public C
{
	public:
		int d,sum;
		dispD()
		{
			cout<<"Enter the value of d=";
			cin>>d;
			
			sum = B::a + b + c + d;
			cout<<endl;
			cout<<"Sum of all="<<sum;
       	}
};

int main()
{
	D d1;
	
	d1.B::dispA();
	d1.dispB();
	d1.dispC();
	d1.dispD();

	return 0;
}
