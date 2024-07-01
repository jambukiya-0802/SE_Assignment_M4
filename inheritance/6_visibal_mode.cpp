//6. Write a C++ Program to show access to Private Public and Protected usingInheritance

#include<iostream>
using namespace std;

class emp
{
	 private:
          string e_name;
     protected:
          int e_no;
     public:
          int age;
      void employee_name()
     {    
          cout<<"\n\t Enter the Name  : ";
          cin>>e_name;
     }
         
          void print_name()
          {
               cout<<"\n\t Employee Name :"<<e_name;
          }

};
class drive : public emp
{
     public:
     void employee_number()
          {
               employee_name();
               cout<<"\n\t Enter The Number  : ";
               cin>>e_no;
          }
     void employee_age()
     {
          cout<<"\n\t Enter Employee Age : ";
          cin>>age;
     }
     void print_info()
     {
          print_name();
          cout<<"\n\t Employee num : "<<e_no;
          cout<<"\n\t Employee Age : "<<age;
     }
};
main()
{
     drive d;
     d.employee_number();
     d.employee_age();
     d.print_info();
}

