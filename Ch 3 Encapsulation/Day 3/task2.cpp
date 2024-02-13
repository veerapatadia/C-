#include<iostream>
using namespace std;
class Cafe{
	private:
		int id,year,squan;
		string name,type,rating;
		static string location;
		
	public:
		Cafe()
		{
			cout<<"Enter Cafe's Id=";
			cin>>this->id;
			cout<<"Enter Cafe's Name=";
			cin>>this->name;
			cout<<"Enter Cafe's type=";
			cin>>this->type;
			cout<<"Enter Cafe's rating=";
			cin>>this->rating;
			cout<<"Enter Cafe's Establish Year=";
			cin>>this->year;
			cout<<"Enter Cafe's Staff quantity=";
			cin>>this->squan;
			
			cout<<endl;
		
		}
		getData()
		{
			cout<<"Id="<<this->id<<endl;
			cout<<"Name="<<this->name<<endl;
			cout<<"Type="<<this->type<<endl;
			cout<<"Rating="<<this->rating<<endl;
			cout<<"Establish Year="<<this->year<<endl;
			cout<<"Staff Quantity="<<this->squan<<endl;
			
		}
		static getlocation()
		{
			cout<<"Location="<<location<<endl;
			cout<<endl;
		}	
};
string Cafe::location="Rajkot";



int main()
{
	int n,i;
	
	
	cout<<"Enter the number of cafe=";
	cin>>n;
	Cafe c[n];
	for(i=0;i<n;i++)
	{
		c[i].getData();
		c[i].getlocation();
		
	}
	return 0;
}
