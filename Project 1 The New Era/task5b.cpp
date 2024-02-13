#include<iostream>
using namespace std;

class student{
		private:
			int id,age;
			string name,std,course;
	};
		
int main()
	{
		int i,n;
		
		cout<<"How many students are there? :"; 
		cin>>n;
	
		student s[n];
	
		for(i=0;i<n;i++)
		{
			cout<<"Enter your Id=";
			cin>>s[i].id;
			cout<<"Enter your Name=";
			cin>>s[i].name;
			cout<<"Enter your Age=";
			cin>>s[i].age;
			cout<<"Enter your standard=";
			cin>>s[i].std;
			cout<<"Enter your Course=";
			cin>>s[i].course;
			
			cout<<endl;
		}
		
		for(i=0;i<n;i++)
		{
			cout<<"Id="<<s[i].id<<endl;
			cout<<"Name="<<s[i].name<<endl;
			cout<<"Age="<<s[i].age<<endl;
			cout<<"Standard="<<s[i].std<<endl;
			cout<<"Course="<<s[i].course<<endl;
			
			cout<<endl;
		}
	}	
	

