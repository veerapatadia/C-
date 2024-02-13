#include<iostream>
using namespace std;
class Admin
{
	private:
		int trevenue;
	
	protected:
	int mansal,empsal,tstaff;
	string cname,cterminate;
	
	
	public:
		setData()
		{
			cout<<"Enter Company Name=";
			cin>>cname;
			cout<<"Enter Manager Salary=";
			cin>>mansal;
			cout<<"Enter Employee Salary=";
			cin>>empsal;
			cout<<"Enter Total Staff=";
			cin>>tstaff;
			cout<<"Enter Total Annual Revenue=";
			cin>>trevenue;
			cout<<"Enter Termination=";
			cin>>cterminate;
			
			cout<<endl;
		}
		
		getData()
		{
			cout<<"Company Name="<<cname<<endl;
			cout<<"Manager Salary="<<mansal<<endl;
			cout<<"Employee Salary="<<empsal<<endl;
			cout<<"Total Staff="<<tstaff<<endl;
			cout<<"Total Annual Revenue="<<trevenue<<endl;
			cout<<"Termination="<<cterminate<<endl;
				
			cout<<endl;
		}
};

class Manager : public Admin{
	
	public:
		void myaccess()
		{
			cout<<"Company Name="<<cname<<endl;
			cout<<"Manager Salary="<<mansal<<endl;
			cout<<"Employee Salary="<<empsal<<endl;
			cout<<"Termination="<<cterminate<<endl;
			cout<<"Total Staff="<<tstaff<<endl;
			
			cout<<endl;
		}
};

class Employee : public Manager{
	
	public:
		void myaccess()
		{
			cout<<"Company Name="<<cname<<endl;
			cout<<"Employee Salary="<<empsal<<endl;
			cout<<"Total Staff="<<tstaff<<endl;
		}
};

int main()
{
	Manager m;
	Employee e;
	
	e.setData();
	e.getData();
	
	e.Manager::myaccess();
	e.myaccess();
	
	return 0;
}
