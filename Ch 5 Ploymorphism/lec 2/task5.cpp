#include<iostream>
using namespace std;

class Number 
{
	private:
	    int x;
	
	public:
	    void setData(int i)
		{
	        this->x = i;
	    }
	    int getData() 
		{
	        return this->x;
	    }
};

int main() {
    Number n1, n2, n3;

    n1.setData(50);
    n2.setData(80);
    n3.setData(70);

    cout << "Value of n1 : " << n1.getData() << endl;
    cout << "Value of n2 : " << n2.getData() << endl;
    cout << "Value of n3 : " << n3.getData() << endl;

    if (n1.getData() < n2.getData() && n3.getData() < n2.getData()) 
	{
        cout << "Both n1 " << n1.getData() << " and n3 " << n3.getData()<< " are less than n2 "<< n2.getData() << endl;
    } 
	else 
	{
        cout << "At least one of n1 "<< n1.getData()<<" and n3 "<< n3.getData()<<" is greater than n2 "<< n2.getData() << endl;
    }

    return 0;
}

