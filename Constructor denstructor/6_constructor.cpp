/*6. Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor*/

#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int e_id, e_salary, e_perform; 
    string e_name;

public:
    void getEmployee() 
    {
        cout << "\n\t Enter Employee Name :";
        cin >> e_name;
        cout << "\n\t Enter Employee ID : ";
        cin >> e_id;
        cout << "\n\t Enter Employee Salary : ";
        cin >> e_salary;
        cout << "\n\t Enter Employee Performance ( /10): ";
        cin >> e_perform;
    }

    void calculating() 
    {
        if (e_perform == 10)
        {
            e_salary += 5000;
        }
        else if (e_perform == 9)
        {
            e_salary += 4500;
        }
        else if (e_perform == 8)
        {
            e_salary += 4000;
        }
        else if (e_perform == 7)
        {
            e_salary += 3500;
        }
        else if (e_perform == 6)
        {
            e_salary += 3000;
        }
        else if (e_perform == 5)
        {
            e_salary += 2500;
        }
        else if (e_perform == 4)
        {
            e_salary += 2000;
        }
        else if (e_perform == 3)
        {
            e_salary += 1500;
        }
        else if (e_perform == 2)
        {
            e_salary += 1000;
        }
        else if (e_perform == 1)
        {
            e_salary += 500;
        }
    }

    void print_info()
    {
        cout << "\n\t Employee Name : " << e_name;
        cout << "\n\t Employee ID   : " << e_id;
        cout << "\n\t Employee Salary: " << e_salary;
    }
};

main() 
{

    Employee w;
    w.getEmployee();
    w.calculating();
    w.print_info();
}
