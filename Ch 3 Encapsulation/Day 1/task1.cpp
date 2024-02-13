#include<iostream>
using namespace std;
class Student{
	private:
		int id,age;
		string name,course,city,email,college;
		
	public:
		setData()
		{
			cout<<"Enter your Id=";
			cin>>this->id;
			cout<<"Enter your Name=";
			cin>>this->name;
			cout<<"Enter your Age=";
			cin>>this->age;
			cout<<"Enter your Course=";
			cin>>this->course;
			cout<<"Enter your Email=";
			cin>>this->email;
			cout<<"Enter your City=";
			cin>>this->city;
			cout<<"Enter your College=";
			cin>>this->college;
			
			cout<<endl;
			
		}
		getData()
		{
			cout<<"Id="<<this->id<<endl;
			cout<<"Name="<<this->name<<endl;
			cout<<"Age="<<this->age<<endl;
			cout<<"Course="<<this->course<<endl;
			cout<<"Email="<<this->email<<endl;
			cout<<"City="<<this->city<<endl;
			cout<<"College="<<this->college<<endl;
			
			cout<<endl;		
		}	
};
int main()
{
	Student s1,s2,s3,s4,s5;
	
	s1.setData();
	s2.setData();
	s3.setData();
	s4.setData();
	s5.setData();
	
	s1.getData();
	s2.getData();
	s3.getData();
	s4.getData();
	s5.getData();

	return 0;
}
