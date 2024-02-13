#include<iostream>
using namespace std;
class Animal{
	public:
	string name;
	int age;
		
};
class Zebra:public Animal{
	public:
		string p;
		void set_value()
		{	
			cout<<"Enter the age of Zebra=";
			cin>>this->age;
			cout<<"Enter the name of Zebra=";
			cin>>this->name;
			cout<<"Enter the place of origin of Zebra=";
			cin>>this->p;
			
			cout<<endl;
			
		}		
};
class Dolphin:public Animal{
	public:
		string p;
		void set_value()
		{
			cout<<"Enter the age of Dolphin=";
			cin>>this->age;
			cout<<"Enter the name of Dolphin=";
			cin>>this->name;
			cout<<"Enter the place of origin of Dolphin=";
			cin>>this->p;
			
			cout<<endl;
			
		}		
};
int main()
{
	Animal a;
	Zebra z;
	z.set_value();
	Dolphin d;
	d.set_value();
	
	return 0;
}
