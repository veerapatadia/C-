#include<iostream>
using namespace std;

class Message {
private:
    string stg;

public:
    
    Message(string v) 
	{
        this->stg = v;
    }

    void print() 
	{
    	
        cout <<stg<< endl;
    }

    void print(string p) {
    	
         
        cout<< stg<<" " << p << endl;
    }
};

int main() {
    
    Message m1("Hello");
   
    m1.print();
    m1.print("World");  

    return 0;
}
