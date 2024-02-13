#include<iostream>
using namespace std;
class A
{
	public:

		int a;
		int A;
			
};
class B : public A
{
	public:
		int A;
		
		dispA()
		{
			cout<<"Enter the value of a=";
			cin>>a;

			cout<<endl;
		}
		
		void getData()
		{
			A=a*a;
			
			cout<<"Square of a="<<A<<endl;
				
			cout<<endl;						
		}	
	
};
class C : public A
{
	public:
		int A;
		
		dispA()
		{
			cout<<"Enter the value of a=";
			cin>>a;

			cout<<endl;
		}
		
		void getData()
		{
			A=a*a*a;
			
			cout<<"Cube of a="<<A<<endl;
				
			cout<<endl;						
		}	
	
};

int main()
{
	B b1;
	
	b1.dispA();
	b1.getData();
	
	C c1;
	
	c1.dispA();
	c1.getData();
	
		
	return 0;	
}

