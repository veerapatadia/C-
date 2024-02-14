#include <iostream>
using namespace std;

ecoin(int b1, int b2) {
	int b3;
	
    b3 = b1;
    b1 = b2;
    b2 = b3;
    
    cout<<"after 5 mint first bowl have "<<b1<<" rupi coin"<<endl;
    cout<<"after 5 mint second bowl have "<<b2<<" rupi coin"<<endl;
    
    return 0;
}

int main() {
    int b1=1,b2=2; 

    cout<<"first bowl have "<<b1<<" rupi coin"<<endl;
    cout<<"second bowl have "<<b2<<" rupi coin"<<endl;
    
    coin(b1, b2);

    return 0;
}

