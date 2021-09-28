#include<iostream>
using namespace std;

class emp{
	private:
		int empno;
		
		float basic,hra,da,np;
	public:
		char name[20];
		void getdata(void);
		void calc(void);
		void display(void);
	
};

void emp :: getdata(void)
{
	cout<<"\n enter emp no";
	cin>>empno;
	cout<<"\n enter employee name";
	cin>>name;
	cout<<"\n enter basic salary";
	cin>>basic;
}
void emp :: calc(void)
{
	hra=(50*basic)/100;
	da=(20*basic)/100;
	np=basic+hra+da;
}
void emp :: display(void)
{
	cout<<"\n emp no="<<empno;
	cout<<"\n basic salary="<<basic;
	cout<<"\n hra="<<hra;
	cout<<"\n da="<<da;
	cout<<"\n np="<<np;
}
int main(){
	emp e1,e2;
	e1.getdata();
	e1.calc();
	e1.display();
	cout<<"\n private obj"<<e1.name;
	return 0;
}
