//1. WAP to create simple calculator using class 
#include<iostream>
using namespace std;

class calc
{
	int n1,n2;
	
	public:
		void get_calculator()
		{
			cout<<"\n\n\t enter the number:";
			cin>>n1;
			cout<<"\n\n\t enter the number:";
			cin>>n2;
		}
		void put_number()
		{
			cout<<"\n\n\t Addition:"<<n1+n2;
			cout<<"\n\n\t Substration:"<<n1-n2;
			cout<<"\n\n\t Multiplication:"<<n1*n2;
			cout<<"\n\n\t Division:"<<n1/n2;
		}
	
};
main()
{
	calc a;
	a.get_calculator();
	a.put_number();
}
