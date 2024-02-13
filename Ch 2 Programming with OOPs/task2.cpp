#include<iostream>
using namespace std;
class car{
	public:
		int id,year;
		string color,carcompname,model;
};
int main()
{
	int i;
	
	car c[5];
	
	for(i=0;i<4;i++)
	{
		cout<<"Enter your Car Id=";
		cin>>c[i].id;
		cout<<"Enter your Car Company Name=";
		cin>>c[i].carcompname;
		cout<<"Enter your Car Color=";
		cin>>c[i].color;
		cout<<"Enter your Model=";
		cin>>c[i].model;
		cout<<"Enter your Car Release Year=";
		cin>>c[i].year;
				
		cout<<endl;
	}
	
		for(i=0;i<4;i++)
	{
		cout<<"Car Id="<<c[i].id<<endl;
		cout<<"Car Company Name="<<c[i].carcompname<<endl;
		cout<<"Car Color="<<c[i].color<<endl;
		cout<<"Car Model="<<c[i].model<<endl;
		cout<<"Car Release Year="<<c[i].year<<endl;
				
		cout<<endl;		
	}
}
