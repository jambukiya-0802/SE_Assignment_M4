//2. Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include<iostream>
using namespace std;

class Calculator
{
	int a,b,c;
	
	public:
		void basic_arithmatic()
		{
			a=30;
			b=9;
		}

void addition()
{
	   c=a+b;
       cout<<"\n\t Addition : "<<c;
}
void subtraction()
{
	 c=a-b;
     cout<<"\n\t Subtraction : "<<c;
}
void division()
{
	  c=a/b;
      cout<<"\n\t Division : "<<c;
}
void multiplication()
{
	 c=a*b;
     cout<<"\n\t Multiplication : "<<c;
}



};
main()
{
	Calculator B;
	B.basic_arithmatic();
    B.addition();
    B.subtraction();
    B.division();
    B.multiplication();
}
