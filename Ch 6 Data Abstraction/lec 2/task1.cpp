#include <iostream>
using namespace std;

class Shape {
public:
    virtual void calculate() = 0;
};

class Circle : public Shape 
{
	protected:
	    double radius, sum;
	
	public:
	    void setData() 
		{
	        cout << "Enter radius=";
	        cin >> radius;
	        cout << endl;
	    
	    }
	
	    void calculate()  
		{
	        sum = 3.14 * radius * radius;
	        cout << "Area of circle = " << sum << endl;
	        cout << endl;
	    }
};

class Triangle : public Shape 
{
	protected:
	    double base, height, sum;
	
	public:
	    void setData() 
		{
	        cout << "Enter base=";
	        cin >> base;
	        cout << "Enter height=";
	        cin >> height;
	        cout << endl;
	        
	    }
	
	    void calculate()  
		{
	        sum = 0.5 * base * height;
	        cout << "Area of triangle = " << sum << endl;
	        cout << endl;
	    }
};

class Rectangle : public Shape 
	{
	protected:
	    double length, width, sum;
	
	public:
	    void setData() 
		{
	        cout << "Enter length=";
	        cin >> length;
	        cout << "Enter width=";
	        cin >> width;
	        cout << endl;
	       
	    }
	
	    void calculate()  
		{
	        sum = length * width;
	        cout << "Area of rectangle = " << sum << endl;
	        cout << endl;
	    }
};

int main() 
{
    Circle c;
    c.setData();
    c.calculate();

    Triangle t;
    t.setData();
    t.calculate();

    Rectangle r;
    r.setData();
    r.calculate();

    return 0;
}

