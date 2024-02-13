#include<iostream>
using namespace std;
class Shape{
	public:
	double width,height;
	
	Shape()
	{
		width=30,height=50;
		cout<<"Width="<<width<<endl;
		cout<<"Height="<<height<<endl;
	}		
};
class Triangle:public Shape{
	public:
		void area()
		{
			int tri;
			
			tri=0.5*(width*height);
			
			cout<<"Area of Triangle="<<tri<<endl;
		}		
};
class Rectangle:public Shape{
	public:
		void area()
		{
			int rec;
			
			rec=(width*height);
			
		cout<<"Area of Rectangle="<<rec<<endl;
		}		
};
int main()
{
	Shape s;
	Triangle t;
	t.area();
	Rectangle r;
	r.area();
	
	return 0;
}
