#include<iostream>
using namespace std;
class second
{
	public:
		int s;
};
int main()
{
	int sec,min,hr,i;
	second s[1];
	
	cout<<"Enter the number of seconds=";
	cin>>s[1].s;
	
	hr=s[1].s/3600;
	s[1].s=s[1].s%3600;
	min=s[1].s/60;
	sec=s[1].s%60;
	
	
	cout<<"HH:MM:SS = "<<hr<<":"<<min<<":"<<sec;
}
