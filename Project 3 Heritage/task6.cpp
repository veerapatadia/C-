#include<iostream>
using namespace std;
class A{
	public:
		int id;
		string name,role;
		dispA()
		{
			cout<<"Enter Id of employee=";
			cin>>id;
			cout<<"Enter Name of employee=";
			cin>>name;
			cout<<"Enter Role of employee=";
			cin>>role;	
		}
};
class B:public A{
	public:
		int sal;
		string exp;
		dispB()
		{
			cout<<"Enter Salary of employee=";
			cin>>sal;
			cout<<"Enter Experience of employee=";
			cin>>exp;
		}
};
class C:public B{
	public:
		string cname,add;
		dispC()
		{
			cout<<"Enter Company name of employee=";
			cin>>cname;	
			cout<<"Enter Address of employee=";
			cin>>add;	
		}
};
class D: public C{
	public:
		int cno;
		string em;
		dispD()
		{
			cout<<"Enter email of employee=";
			cin>>em;	
			cout<<"Enter contact number of employee=";
			cin>>cno;	
		}
		getData()
		{
			cout<<endl;
			cout<<"Id="<<id<<endl;
			cout<<"Name="<<name<<endl;
			cout<<"Role="<<role<<endl;
			cout<<"Salary="<<sal<<endl;
			cout<<"Experience="<<exp<<endl;
			cout<<"Comapny Name="<<cname<<endl;
			cout<<"Address="<<add<<endl;
			cout<<"Email="<<em<<endl;
			cout<<"Contact Number="<<cno<<endl;
		}
};
		
int main()
{
	D d1;
	
	d1.dispA();
	d1.dispB();
	d1.dispC();
	d1.dispD();
	d1.getData();
	
	return 0;
}
