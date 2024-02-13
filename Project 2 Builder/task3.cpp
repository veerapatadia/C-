#include<iostream>
using namespace std;
class bank{
	string name, address,ch;
	int balance, bal;
	public:
		void open_account();
		void deposit_account();
		void check_account();
		void withdraw_account();
		
	void bank.open_account()
	{
		cout<<"\t\t\t\t\t\tEnter Your Full Name: ";
		cin<<name;
	 	cout<<"\t\t\t\t\t\tEnter Your Address: ";
	 	cin<<address;
	 	cout<<"\t\t\t\t\t\tAccount type choose saving (s) or current(c): ";
	 	cin<<ch;
	 	cout<<"\t\t\t\t\t\tEnter Amount for Deposit: ";
	 	cin<<balance;
	 	cout<<"\t\t\t\t\t\tAccount sucessfully created! "<<endl;	
	}
	
	void bank.deposit_account()
	{
		cout<<"\t\t\t\t\t\tEnter How much you deposit: ";
		cin<<bal;
	 	balance += bal;
	 	cout<<"\t\t\t\t\t\tYour current balance is:"<<balance<<endl;	
	}
	
	void bank.check_account()
	{
		cout<<"\t\t\t\t\t\tYour Name: "<<name<<endl;
		cout<<"\t\t\t\t\t\tYour Address: "<<address<<endl;
		cout<<"\t\t\t\t\t\tYour Account type: "<<ch<<endl;
		cout<<"\t\t\t\t\t\tYour Balance: "<<balance<<endl;	
	}
	
	void bank.withdraw_account()
	{
		cout<<"\t\t\t\t\t\tYour Name: "<<name<<endl;
		cout<<"\t\t\t\t\t\tYour Address: "<<address<<endl;
		cout<<"\t\t\t\t\t\tYour Account type: "<<ch<<endl;
		cout<<"\t\t\t\t\t\tYour Balance: "<<balance<<endl;	
	}	
     
};

int main()
{
	int answer,x,bank obj;
	
	do
	{
		system("cls");
		cout<<"\n\n\t\t\t\t\t\tBank Management System"<<endl<<endl;
		cout<<"\n\n\t\t\t\t\t\t1) Open Account"<<endl<<endl;
		cout<<"\n\n\t\t\t\t\t\t2)Deposit Money"<<endl<<endl;
		cout<<"\n\n\t\t\t\t\t\t3)Withdraw Money"<<endl<<endl;
		cout<<"\n\n\t\t\t\t\t\t4)Check Account"<<endl<<endl;
		cout<<"\n\n\t\t\t\t\t\t5) Exit"<<endl<<endl;
		cout<<"\n\n\t\t\t\t\t\tSelect An Option From here 1/2/3/4/5/:";
		
		switch(answer)
		{
			case 1:
				cout<<"\n\n\t\t\t\t\t\t1) Open Account"<<endl<<endl;
				obj.open_account();
				break;
			case 2:	
				cout<<"\n\n\t\t\t\t\t\t2) Deposit Money"<<endl<<endl;
				obj.deposit_account();
				break;
			case 3:	
				cout<<"\n\n\t\t\t\t\t\t3) Withdraw Money"<<endl<<endl;
				obj.withdraw_account();
				break;
			case 4:	
				cout<<"\n\n\t\t\t\t\t\t4) Check Account"<<endl<<endl;
				obj.check_account();
				break;
			case 5:
				if(answer==5)
				{
					exit(1);
				}	
			default:
				cout<<"\n\n\t\t\t\t\t\t\tThis is not exist so try again"<<endl;			
	}
	cout<<"\n\n\t\t\t\t\t\tSelect An option again: yes= y or no= n=>";
	
	x=getch();
	if(x=='n'|| x=='y')	
	{
		exit(0);
	}
	
	while(x=='y' || x=='y');
	
	getch();
}
