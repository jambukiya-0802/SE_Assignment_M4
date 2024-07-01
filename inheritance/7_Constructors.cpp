//7. Write a C++ Program to illustrates the use of Constructors in multilevelinheritance

#include<iostream>
using namespace std;

class Constructors

{
	public : 
	int a,b,c;
		Constructors()
		{
			a=10;
			b=15;
			c=a+b;
		}	
          void add()
          {
               cout<<"\n\n\t Addition = "<<c;
          }
};
class subtraction : public  Constructors
{
	
	public : 
	int x,y,z;
          subtraction()
          {
            x=50;
			y=20;
			z=x-y;
          }
		void sub()
		{
			
			cout<<"\n\n\t Subtraction = "<<z;
		}
};
class multiplication : public subtraction
{
	public : 
	int g,h,i;
          multiplication()
          {
            g=10;
            h=5;
			i=g*h;
          }
		void mul()
		{
			
			cout<<"\n\n\t Multiplication = "<<i;
			
		}
};

main()
{
	multiplication M;
	M.add();
	M.sub();
	M.mul();
}
