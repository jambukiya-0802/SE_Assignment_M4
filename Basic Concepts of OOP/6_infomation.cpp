/*6.Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables.*/

#include<iostream>
using namespace std;

class person
{
	private:
		int age;
		string p_name;
		string p_country;
		
	public:
		void get_valu()
		{
		    cout<<"\n\t Enter the name :";
            cin>>p_name;
            cout<<"\n\t Enter the age : ";
            cin>>age;
            cout<<"\n\t Enter the Country :";
            cin>>p_country;
		}
		void put_valu()
		{
			cout<<"\n\n\t Name : "<<p_name;
            cout<<"\n\t Age : "<<age;
            cout<<"\n\t Country :"<<p_country;
		}
};
main()
{
	person p;
	p.get_valu();
	p.put_valu();
}

