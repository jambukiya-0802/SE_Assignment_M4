/*5. Assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the 
marks obtained in two subjects and class result contains the total marks 
obtained in the test. The class result can inherit the details of the marks 
obtained in the test and roll number of students. (Multilevel Inheritance)*/

#include<iostream>
using namespace std;

class student
{
	protected:
		
	int rollno;
	
	public:
		void get_rollno()
		{
		    cout<<"\n\n\t enter the rollno:";
	     	cin>>rollno;	
		}
};

class test: public student
{
	protected:
		
	int subject1,subject2;
	
	public:
		void get_mark()
		{
			cout<<"\n\n\t enter the subject1 mark:";
			cin>>subject1;
			cout<<"\n\n\t enter the subject2 mark:";
			cin>>subject2;
		}
};
class result:public test
{
	int total;
	
	public:
		void get_result()
		{
			total=0;
			total=subject1+subject2;
			
		}
		void print_data()
		{
			cout<<"\n\n\t rollno:"<<rollno;
			cout<<"\n\n\t subject1:"<<subject1;
			cout<<"\n\n\t subject2:"<<subject2;
			cout<<"\n\n\t total marks:"<<total;
		}
};
main()
{
	result a;
	
	a.get_rollno();
	a.get_mark();
	a.get_result();
	a.print_data();
	a.get_result();
	
}
