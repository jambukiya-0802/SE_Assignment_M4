//4. Write a C++ Program display Student Mark sheet using Multiple inheritance

#include<iostream>
using namespace std;

class student
{
	protected:
	int roll_no,a_age;
	string a_name;
	
	public:
		void get_deta()
		{	
		   cout<<"\n\t Enter Student Name :";
           cin>>a_name;
           cout<<"\n\t Enter Student Rollno : ";
           cin>>roll_no;
           cout<<"\n\t Enter Student Age : ";
           cin>>a_age;
		}
	
};
class marks
{
	protected:
	int s1,s2,s3,std;
	public:
		void get_marks()
		{
			cout<<"\n\t ANDROID : ";
            cin>>s1;
            cout<<"\n\t JAVA : ";
            cin>>s2;
            cout<<"\n\t PYTHON : ";
            cin>>s3;
		}
		
			
};
class Result : public student, public marks
{
	 int t_mark,per;
          string grade;
     public:
          void calulate()
          {
               t_mark = s1 + s2 + s3;
               per = t_mark / 3;        
          }
          void print_result()
          {
              	cout<<"\n\t Total Marks : "<<t_mark;
         	     cout<<"\n\t  percent :"<<per;
              	cout<<"\n\t Student Name : "<<a_name;
           		cout<<"\n\t Student Rollno : "<<roll_no;
          	 	cout<<"\n\t Student Age : "<<a_age;
           		cout<<"\n\t ANDROID  : "<<s1;
          	  	cout<<"\n\t JAVA  : "<<s2;
          	  	cout<<"\n\t PYTHON : "<<s3;
	
               if(per>=70)
               {
                        printf("\n\n\t Grade : A+");
               }
               else if(per>=60)
               {
                        printf("\n\n\t Grade : A");
               }
               else if(per>=50)
               {
                        printf("\n\n\t Grade : B");
               }    
               else if(per>=40)
               {
                        printf("\n\n\t Grade : C");
               }    

          }
};
main()
{
     Result r;
     r.get_deta();
     r.get_marks();
     r.calulate();
     r.print_result();
     
}
