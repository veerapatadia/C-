#include<iostream>
using namespace std;

class Calculator{
public:
    void method1(int a, int b) 
	{
        cout<<"The division is: "<<a/b<<endl;
    }

    void method1(int a, int b, int c) 
	{
        cout<<"The subtraction is: "<<a-b-c<<endl;
    }

    void method1(int a, int b, int c, int d) 
	{
        cout<<"The multiplication is: "<<a*b*c*d<<endl;
    }

    void method1(int a,int b,int c,int d,int e) 
	{
        cout<<"The addition is: "<<a+b+c+d+e<<endl;
    }
};

int main() 
{
    Calculator cal;

    int numArguments;
    cout << "Enter the number of arguments (2, 3, 4, or 5): ";
    cin >> numArguments;

    switch (numArguments) 
	{
        case 2:
            cal.method1(10,5);
            break;
        case 3:
            cal.method1(10,5,3);
            break;
        case 4:
            cal.method1(1,2,3,4);
            break;
        case 5:
            cal.method1(10,5,3,4,5);
            break;
        default:
            cout<<"Invalid option"<<endl;
    }

    return 0;
}

