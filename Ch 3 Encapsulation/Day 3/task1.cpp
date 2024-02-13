#include<iostream>
using namespace std;
class Diamond
{
	private:
		int id,squan,revenue,import,ediamond;
		string name,ceo;
		
	public:
		Diamond(int id,string name,int squan,int revenue,int import,int ediamond,string ceo)
		{
			this->id = id;
			this->name = name;
			this->squan = squan;
			this->revenue = revenue;
			this->import = import;
			this->ediamond = ediamond;
			this->ceo = ceo;	
		}	
	
	getData()
	{
		cout<<"Id="<<this->id<<endl;
		cout<<"Name="<<this->name<<endl;
		cout<<"Staff Quantity="<<this->squan<<endl;
		cout<<"Revenue="<<this->revenue<<endl;
		cout<<"Import raw diamonds="<<this->import<<endl;
		cout<<"Export raw diamonds="<<this->ediamond<<endl;
		cout<<"CEO="<<this->ceo<<endl;
		
		cout<<endl;
	}	
};
int main()
{
	Diamond d1(111,"DiamondSquare",60,1000000,6000,5000,"Veera"),
	d2(222,"ZestOfLuxury",50,2000000,5000,5500,"Foram"),
	d3(333,"GlittersWorld",40,1100000,4000,5000,"Krupali"),
	d4(444,"VPDiamonds",50,2500000,7000,6000,"Divyanshi"),
	d5(555,"FilterDiamonds",70,4500000,7000,8000,"Krishna");
	
	d1.getData();
	d2.getData();
	d3.getData();
	d4.getData();
	d5.getData();
	
	
	return 0;
}
