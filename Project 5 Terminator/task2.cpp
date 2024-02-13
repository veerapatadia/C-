#include <iostream>
using namespace std;

class A
{
	public:
	    void dispA() 
		{
	        cout << "This is class A"<<endl;
	    }
};

class B : public A
{
	public:
	    void dispB() 
		{
	        cout << "This is class B"<<endl;
	    }
};

class C : public A
{
	public:
	    void dispC() 
		{
	        cout << "This is class C"<<endl;
	    }
};

class D : public B , public C
{
	public : 
	    void dispD() 
		{
	        cout << "This is class D"<<endl;
	    }
};

int main() 
{
    D d1;
   	d1.B::dispA();
   	d1.dispB();
   	d1.dispC();
   	d1.dispD();
   	

    return 0;
}

