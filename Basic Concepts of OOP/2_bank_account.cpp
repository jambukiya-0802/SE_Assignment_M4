//2. Define a class to represent a bank account. Include the following members:
#include<iostream>
using namespace std;

class bank_account
{
	int acc_num,acc_balan,deposit,withdreaw;
	string dep_name,acc_type;
	
	public:
		void get_value()
		{
			cout<<"\n\t Enter the account number:";
			cin>>acc_num;
			cout<<"\n\t Enter the account balance:";
			cin>>acc_balan;
			cout<<"\n\t Enter the name:";
			cin>>dep_name;
			cout<<"\n\t Enter the type of account:";
			cin>>acc_type;
		}
		void dept_amount()
		{
			cout<<"\n\t Enter the deposit:";
			cin>>deposit;
			acc_balan+=deposit;
		}
		void with_amout()
		{
			cout<<"\n\taccount balance:"<<acc_balan;
			cout<<"\n\t withdreaw:";
			cin>>withdreaw;
			acc_balan-=withdreaw;
		}
		void displ_rec()
		{
			cout<<"\n\t name:"<<dep_name;
			cout<<"\n\taccount balance:"<<acc_balan;
		}
		
		
};
main()
{
	bank_account b;
    b.get_value();
    b.dept_amount();
    b.with_amout();
    b.displ_rec();
} 
