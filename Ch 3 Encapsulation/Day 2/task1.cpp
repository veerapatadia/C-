#include<iostream>
using namespace std;
class hotel{
	private:
		int id,year,squan,rquan;
		string name,type,rating;
		static string city;
		
	public:
		setData()
		{
			cout<<"Enter your Hotel Id=";
			cin>>this->id;
			cout<<"Enter your Hotel Name=";
			cin>>this->name;
			cout<<"Enter type=";
			cin>>this->type;
			cout<<"Enter your Hotel rating=";
			cin>>this->rating;
			cout<<"Enter your Hotel Establish Year=";
			cin>>this->year;
			cout<<"Enter your Hotel Staff quantity=";
			cin>>this->squan;
			cout<<"Enter your Hotel Room quantity=";
			cin>>this->rquan;
			
		}
		getData()
		{
			cout<<"Id="<<this->id<<endl;
			cout<<"Name="<<this->name<<endl;
			cout<<"Type="<<this->type<<endl;
			cout<<"Rating="<<this->rating<<endl;
			cout<<"Establish Year="<<this->year<<endl;
			cout<<"Staff Quantity="<<this->squan<<endl;
			cout<<"Room Quantity="<<this->rquan<<endl;
			
		}
		static getcity()
		{
			cout<<"City="<<city<<endl;
			cout<<endl;
		}	
};
string hotel::city="Manali";

int main()
{
	int i,n;
	
	cout<<"Enter the number of hotels=";
	cin>>n;
	cout<<endl;
	
	hotel h[n];
	
	for(i=0;i<n;i++)
	{
		h[i].setData();
		cout<<endl;
	}
	
	for(i=0;i<n;i++)
	{
		h[i].getData();
		h[i].getcity();	
	}

	return 0;
}
