#include<iostream>
using namespace std;
int sum(int v,int p)
{
	return v+p;
}
int sub(int v,int p)
{
	return v-p;
}
int multi(int v,int p)
{
	return v*p;
}
int div(int v,int p)
{
	return v/p;
}
int mod(int v,int p)
{
	return v%p;
}

int main()
{
	int x,y,option,i;
	
	for(i=option;i<=0;option++)
	{
		cout<<"Press 1 for +"<<endl;
		cout<<"Press 2 for -"<<endl;
		cout<<"Press 3 for *"<<endl;
		cout<<"Press 4 for /"<<endl;
		cout<<"Press 5 for %"<<endl;
		cout<<"Press 6 for exit"<<endl;
		
			cout<<"Enter your Option=";
			cin>>option;
			
			if(option==6)
			{
				break;
			}
			else if(option>6)
			{
				cout<<"Enter valid Number:";
			}
			
			cout<<"Enter first number:";
			cin>>x;
			cout<<"Enter second number:";
			cin>>y;
			
			switch(option)
			{
				case 1:
					cout<<"Addition="<<sum(x,y)<<endl;
					break;
					
				case 2:
					cout<<"Subtraction="<<sub(x,y)<<endl;
					break;
					
				case 3:
					cout<<"Multiplication="<<multi(x,y)<<endl;
					break;
					
				case 4:
					cout<<"Division="<<div(x,y)<<endl;
					break;
					
				case 5:
					cout<<"Module="<<mod(x,y)<<endl;
					break;	
					
				default:
					cout<<"Error...";					
			}
	}
	return 0;
}
