#include<iostream>
using namespace std;
class mother
{
	public:
		dispA()
		{
			cout<<"This is mother class...";
		}
};
class daughter:public mother
{
	public:
		dispB()
		{
			cout<<"This is daughter class...";
		}
};
int main()
{
	daughter d1;
	
	d1.dispA();
	d1.dispB();
	
	return 0;
}
