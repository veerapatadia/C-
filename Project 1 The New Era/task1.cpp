#include<iostream>
using namespace std;
class distance
{
	public:
		int inch,feet;
};
int main()
{
	int f1,f2,i1,i2,v,p;
	
	
	cout<<"Enter the Feet=";
	cin>>f1;
	cout<<"Enter the Inch=";
	cin>>i1;
	cout<<"Enter the Feet=";
	cin>>f2;
	cout<<"Enter the Inch=";
	cin>>i2;
	
	
	v=f1+f2;
	p=i1+i2;
	
	if(v>=12)
	{
		v=v+p/12;
		p=p%12;
	}
	cout<<endl;
	
	cout<<f1<<"feet";
	cout<<i1<<"inch + ";
	cout<<f2<<"feet";
	cout<<i2<<"inch = ";
	cout<<v<<"feet";
	cout<<p<<"inch";
	
	return 0;
	
}

