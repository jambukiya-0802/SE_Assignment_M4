/*8. Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading*/
#include<iostream>
using namespace std;

class maths
{
	int a,b,c;
	float f;
	
	public:
		void add(int x,int y)
		{
			a=x;
			b=y;
			cout<<"\n\n\t Addition:"<<a+b;
		}
		
			void add(float x,float y)
		{
			a=x;
			b=y;
			cout<<"\n\n\t Subtraction:"<<a-b;
	    }
	    
	    	void add(int x,float y)
		{
			a=x;
			b=y;
			cout<<"\n\n\t Multiplication:"<<a*b;
	    }
	    	void add(float x,int y)
		{
			a=x;
			b=y;
			cout<<"\n\n\t Division:"<<a/b;
	    }
};
main()
{
	maths M ;
	M.add(5,3);
	M.add(8.4f,9.3f);
	M.add(14,10.8f);
	M.add(11.3f,15);
	
}

