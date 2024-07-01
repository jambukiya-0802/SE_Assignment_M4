//1.Write a program to find the multiplication values and the cubic values usinginline function

#include<iostream>
using namespace std;

class cubic
{
	int c,v;
	
	public:
		void get_num()
		{
			cout<<"\n\t Enter the Number for Cubic Value:";
			cin>>c;
		}
		void get_value()
		{
			v=c*c*c;
			cout<<"\n\t cubic value:"<<v;
			
		}
};
main()
{
	cubic F;
	F.get_num();
	F.get_value();
}
