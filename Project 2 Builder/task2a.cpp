#include<iostream>
using namespace std;
class Supermarket
{
	private:
		int num,quan;
		double price,dis,amt,Total;
		string name;
		
	public:
		Supermarket()
		{
			cout<<"Enter item number=";
			cin>>this->num;
			cout<<"Enter item name=";
			cin>>this->name;
			cout<<"Enter item quantity=";
			cin>>this->quan;
			cout<<"Enter item price=";
			cin>>this->price;
			cout<<"Enter item discount=";
			cin>>this->dis;
			
			cout<<endl;
		}	
		
		void pre()
		{
			cout<<"____________________________________________________________________________________________"<<endl;
			cout<<"Item number\t"<<"Item name\t"<<"Quantity\t"<<"Price\t\t"<<"Discount\t"<<"Total"<<endl;		
		}
		void show()
		{
			amt=price*quan;
			Total=amt-(amt*dis/100);
			cout<<this->num <<"\t\t"<<this->name<<"\t\t"<<this->quan<<"\t\t"<<this->price<<"\t\t"<<this->dis<<"\t\t"<<this->Total<<"\t"<<endl;
		}
		double bill()
		{
			return Total;
		}
};

int main()
{
	int id=1111,password=9050,pass,i,n;

	
	cout<<"Enter your Id=";
	cin>>i;
	cout<<"Enter your Password=";
	cin>>pass;
	cout<<endl;
	
	if(id==i && password==pass)
	{
		cout<<"How many items are there? =";
		cin>>n;
		cout<<endl;
	}
	Supermarket s[n];
	
	cout<<endl;
	cout<<"\t\t\t\t\tLa Delicious Store"<<endl;
	cout<<"Date:15/01/2024"<<endl;
	
	s[0].pre();
	
	for(i=0;i<n;i++)
	{
		 
		s[i].show();
	}
	
	double grandTotal=0;
	for(i=0;i<n;i++)
	{
		grandTotal += s[i].bill(); 
	}
	cout<<endl<<endl;
	
	cout<<"Grandtotal=  "<<grandTotal<<endl;
	cout<<"____________________________________________________________________________________________"<<endl;
	cout<<"Thanks For Visiting"<<endl;
	return 0;
}
   
