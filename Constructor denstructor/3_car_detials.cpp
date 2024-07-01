/*3. Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables.*/

#include<iostream>
using namespace std;

class car
{

		string Company;
        string model;
        int year;
        	
	  public:
void get_info()
{
	 cout<<"\n\t  Company Name :";
     cin>>Company;
     cout<<"\n\t  Model Name : ";
     cin>>model;
     cout<<"\n\t  model year : ";
     cin>>year;
}
void print_info()
{
	cout<<"\n\t Compnay : "<<Company;
    cout<<"\n\t Modle   : "<<model;
    cout<<"\n\t Year    : "<<year;
}

};
main()
{
	car A;
	A.get_info();
	A.print_info();
}
