#include<iostream>
using namespace std;
class A{
	public:
		int id,cno;
		string name,em;
		dispA()
		{
			cout<<"Enter Id of employee=";
			cin>>id;
			cout<<"Enter name of employee=";
			cin>>name;
			cout<<"Enter email of employee=";
			cin>>em;
			cout<<"Enter contact number of employee=";
			cin>>cno;	
		}
};
class B{
	public:
		int sal;
		string cname,role,exp;
		dispB()
		{
			cout<<"Enter company name of employee=";
			cin>>cname;
			cout<<"Enter role of employee=";
			cin>>role;
			cout<<"Enter experience of employee=";
			cin>>exp;
			cout<<"Enter salary of employee=";
			cin>>sal;		
		}
};
class C: public A,public B{
	public:
		dispC(){
			cout<<endl;
			cout<<"Id="<<id<<endl;
			cout<<"Name="<<name<<endl;
			cout<<"Email="<<em<<endl;
			cout<<"Contact Number="<<cno<<endl;
			cout<<"Comapny Name="<<cname<<endl;
			cout<<"Role="<<role<<endl;
			cout<<"Experience="<<exp<<endl;
			cout<<"Salary="<<sal<<endl;
		}
};
int main()
{
	C c1;
	
	c1.dispA();
	c1.dispB();
	c1.dispC();
	
	return 0;
}
