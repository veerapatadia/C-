#include<iostream>
using namespace std;
class Customer{
	private:
		int id,age,mob;
		string name,tele,city,sim;
		
	public:
		setData()
		{
			cout<<"Enter your Id=";
			cin>>this->id;
			cout<<"Enter your Name=";
			cin>>this->name;
			cout<<"Enter your Age=";
			cin>>this->age;
			cout<<"Enter your Telecom brand name=";
			cin>>this->tele;
			cout<<"Enter your Mobile Number=";
			cin>>this->mob;
			cout<<"Enter your City=";
			cin>>this->city;
			cout<<"Enter your Simcard Validity=";
			cin>>this->sim;
			
			cout<<endl;
			
		}
		getData()
		{
			cout<<"Id="<<this->id<<endl;
			cout<<"Name="<<this->name<<endl;
			cout<<"Age="<<this->age<<endl;
			cout<<"Telecom Brand Name="<<this->tele<<endl;
			cout<<"Mobile Number="<<this->mob<<endl;
			cout<<"City="<<this->city<<endl;
			cout<<"Simcard Validity="<<this->sim<<endl;
			
			cout<<endl;		
		}	
};
int main()
{
	Customer c1,c2,c3,c4,c5;
	
	c1.setData();
	c2.setData();
	c3.setData();
	c4.setData();
	c5.setData();
	
	c1.getData();
	c2.getData();
	c3.getData();
	c4.getData();
	c5.getData();

	return 0;
}
