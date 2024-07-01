/*3. Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance) */

#include<iostream>
using namespace std;

class person
{
	protected:
			int rollno,age;
			string name;
			
		public:
			void get_person()
			{
	     		cout<<"\n\tenter the rollno:";
				cin>>rollno;
				cout<<"\n\tenter the age:";
				cin>>age;
				cout<<"\n\tenter the name:";
				cin>>name;
					
			}
};
class student
{
	protected:
		
	int s1,s2,s3;
	
	public:
		void get_student()
		{
			cout<<"\n\tenter the s1 mark:";
			cin>>s1;
			cout<<"\n\tenter the s2 mark:";
			cin>>s2;
			cout<<"\n\tenter the s3 mark:";
			cin>>s3;
			
		}
};
class teacher:public person,public student
{
	protected:
		
	int salary,total;
	
	public:
		void get_teacher()
		{
			cout<<"\n\n\t enter the salary:";
			cin>>salary;
		}
	
		void get_total()
		{
			total=0;
			total=s1+s2+s3;
		}
		void print_data()
		{
			cout<<"\n\n\t rollno:"<<rollno;
			cout<<"\n\n\t age:"<<age;
			cout<<"\n\n\t name:"<<name;
			cout<<"\n\n\t total marks:"<<total;
			cout<<"\n\n\t total salary:"<<salary;
		}
};
main()
{
	teacher a;
	
	a.get_person();
	a.get_student();
	a.get_teacher();
	a.get_total();
	a.print_data();
	
}
	
