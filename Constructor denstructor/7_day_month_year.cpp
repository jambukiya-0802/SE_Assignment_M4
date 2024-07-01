/*7.Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid.*/

#include<iostream>
using namespace std;

class date
{
	int day,month,year;
	
	public:
		void print_date()
		{
			cout<<"\n\t Enter Day  :";
            cin>>day;
            cout<<"\n\t Enter Month :";
            cin>>month;
            cout<<"\n\t Enter Year :";
            cin>>year;
		}

void print_data()
{
	
    cout<<"\n\t Days : "<<day;
    cout<<"\n\t Month: "<<month;
    cout<<"\n\t Year : "<<year;
    
    if(day>32)
    {
    	cout<<"day is invalid";
	}
	else if(month>13)
	{
		cout<<"month is invalid";
	}
	
}
	  
};
main()
{
	date s;
	s.print_date();
    s.print_data();
}

