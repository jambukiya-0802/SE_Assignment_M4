//1. Write a program of to swap the two values using template 
#include<iostream>
using namespace std;

template<class F>

void swapping(F a,F b)
{
	F temp;
	
	cout<<"\n\n\t Before swapping..";
	cout<<"\n\n\t enter a:"<< a;
	cout<<"\n\n\t enter b:"<< b;
	
	temp=a;
	a=b;
	b=temp;
	
	cout<<"\n\n\t After swapping..";
	cout<<"\n\n\t enter a:"<< a;
	cout<<"\n\n\t enter b:"<< b;
};
main()
{
	float i,j;
	cout<<"\n\n\t Input i = ";
	cin>>i;
	cout<<"\n\n\t Input j = ";
	cin>>j;
	swapping(i,j);
}
