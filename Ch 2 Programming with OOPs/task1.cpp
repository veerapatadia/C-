#include<iostream>
using namespace std;
class employees{
	public:
		int id,age,salary;
		string name,role,experience,city,compname;
};
int main()
{
	int i;
	
	employees e[5];
	
	for(i=0;i<5;i++)
	{
		cout<<"Enter your Id=";
		cin>>e[i].id;
		cout<<"Enter your Name=";
		cin>>e[i].name;
		cout<<"Enter your Role=";
		cin>>e[i].role;
		cout<<"Enter your Age=";
		cin>>e[i].age;
		cout<<"Enter your Salary=";
		cin>>e[i].salary;
		cout<<"Enter your Experience=";
		cin>>e[i].experience;
		cout<<"Enter your City=";
		cin>>e[i].city;
		cout<<"Enter your Company Name=";
		cin>>e[i].compname;
		
		cout<<endl;
	}
	
		for(i=0;i<5;i++)
	{
		cout<<"Id="<<e[i].id<<endl;
		cout<<"Name="<<e[i].name<<endl;
		cout<<"Role="<<e[i].role<<endl;
		cout<<"Age="<<e[i].age<<endl;
		cout<<"Salary="<<e[i].salary<<endl;
		cout<<"Experience="<<e[i].experience<<endl;
		cout<<"City="<<e[i].city<<endl;
		cout<<"CompanyName="<<e[i].compname<<endl;
		
		cout<<endl;		
	}
}
