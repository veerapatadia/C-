#include<iostream>
using namespace std;
class time
{
	public:
		float h,m,s;
};
int main()
{
	int sec,min,hr;
	time t1,t2;
	
	cout<<"Enter the Hours=";
	cin>>t1.h;
	cout<<"Enter the Minutes=";
	cin>>t1.m;
	cout<<"Enter the Seconds=";
	cin>>t1.s;
	
	cout<<"Enter the Hours=";
	cin>>t2.h;
	cout<<"Enter the Minutes=";
	cin>>t2.m;
	cout<<"Enter the Seconds=";
	cin>>t2.s;
	
	sec=t1.s+t2.s;
	min=t1.m+t2.m+(sec/60);
	hr=t1.h+t2.h+(min/60);
	min=min%60;
	sec=sec%60;
	
	cout<<endl;
	cout<<hr<<"Hours "<<min<<"Minutes "<<sec<<"Seconds";
	
	return 0;
	
}

