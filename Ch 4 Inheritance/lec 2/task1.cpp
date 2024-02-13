#include<iostream>
using namespace std;
class RBI{
	public:
		int a=100000,r,n;
	public:
		dispA()
		{
			cout<<"Amount="<<a<<endl;
			cout<<"Enter the Rate=";
			cin>>r;
			cout<<"Enter the Tenure=";
			cin>>n;	
		}	
		
};
class SBI:public RBI{
	public:
		ROI()
		{
			int interest;
			
			interest=a*r*n/100;
			
			cout<<"Interest of SBI bank="<<interest<<endl;
			cout<<endl;
		}	
		
};
class BOB:public RBI{
	public:
		ROI()
		{
			int interest;
			
			interest=a*r*n/100;
			
			cout<<"Interest of BOB bank="<<interest<<endl;
			cout<<endl;
		}	
		
};
class ICICI:public RBI{
	public:
		ROI()
		{
			int interest;
			
			interest=a*r*n/100;
			
			cout<<"Interest of ICICI bank="<<interest<<endl;
			cout<<endl;
		}			
};
int main()
{
	SBI S;
	BOB B;
	ICICI I;
	
	S.dispA();
	S.ROI();
	
	B.dispA();
	B.ROI();
	
	I.dispA();
	I.ROI();
	
	return 0;
}
