#include<iostream>
using namespace std;

class house{
	public:
		int door,bed,window,wardrobe,flowerpot;	
};
int main()
{
	int i,n;
	
	cout<<"How many rooms=";
	cin>>n;
	
	house h[n];
	
	for(i=0;i<n;i++)
	{
		cout<<"Enter number of Doors=";
		cin>>h[i].door;
		cout<<"Enter number of Beds=";
		cin>>h[i].bed;
		cout<<"Enter number of Windows=";
		cin>>h[i].window;
		cout<<"Enter number of Wardrobes=";
		cin>>h[i].wardrobe;
		cout<<"Enter number of Flowerpots=";
		cin>>h[i].flowerpot;
		
		cout<<endl;	
	}
	
	for(i=0;i<n;i++)
	{
		cout<<"Doors="<<h[i].door<<endl;
		cout<<"Beds="<<h[i].bed<<endl;
		cout<<"Windows="<<h[i].window<<endl;
		cout<<"Wardrobes="<<h[i].wardrobe<<endl;
		cout<<"Flowerpots="<<h[i].flowerpot<<endl;
		
		cout<<endl;	
	}
}
