#include<iostream>
using namespace std;
class P
{
	public:
		float tem;
		
		temperature()
		{
			cout<<"Enter the degree=";
			cin>>tem;
			cout<<endl;
			
			cout<<"Temperature="<<tem<<endl;
		}				
};
class Q : public P
{
	public:
		
		float fah;
		
		fahrenheit()
		{
			fah=(tem*9/5)+32;
			cout<<"Fahrenhiet="<<fah<<endl;
		}
};
class R : public Q
{
	public:
		
		float kel;
		
		kelvin()
		{
			kel=(fah-32)*5/9+273.15;
			cout<<"Kelvin="<<kel<<endl;
		}
};
int main()
{
	R r;
	
	r.temperature();
	r.fahrenheit();
	r.kelvin();
}

