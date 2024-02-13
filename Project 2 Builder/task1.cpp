#include<iostream>
using namespace std ;
class  Railway{
    private :
        int num,time;
		string name,src,desti,searchtrain;

    public:
        Railway()
        {
            cout<<"Enter Train number=";
			cin>>this->num;
			cout<<"Enter Train Name=";
			cin>>this->name;
			cout<<"Enter Train source=";
			cin>>this->src;
			cout<<"Enter Train destination=";
			cin>>this->desti;
			cout<<"Enter Train time=";
			cin>>this->time;
			
			cout<<endl;
        }

        getData(int number)
        {
        	if(this->num==number)
			    {
		    	    cout<<"Train Number="<<this->num<<endl;
					cout<<"Train Name="<<this->name<<endl;
					cout<<"Train Source="<<this->src<<endl;
					cout<<"Train Destination="<<this->desti<<endl;
					cout<<"Train Time="<<this->time<<endl;	
	    		}
		}
};

int main(){

	int n;
	
	cout<<"How many Train Reservations are? =";
	cin>>n;
	cout<<endl;
	
    Railway r[n];

    int i;
    int number;
    
    cout<<"Search the Train Number =";
	cin>>number;
	cout << endl ;
	
    for(i=0;i<n;i++)
	{
		r[i].getData(number);
	}

    return 0;
}
