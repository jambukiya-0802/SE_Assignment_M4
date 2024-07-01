//2. Define a class to represent a bank account. Include the following members:
#include<iostream>
#include <string>
using namespace std;

class bank
{
	int acc_num;
	string name;
	string acc_type;
	int acc_balance;
	
	public:
		void get_account()
		{
			cout<<"\n\n\t enter the account name:";
			cin>>acc_num;
			
			cout<<"\n\n\t enter the name:";
			cin>>name;
			
			cout<<"\n\n\t enter the account type:";
			cin>>acc_type;
			
			cout<<"\n\n\t enter the balance:";
			cin>>acc_balance;
		}
		void get_magager()
		{
			cout<<"\n\n\t account name:"<<acc_num;
			cout<<"\n\n\t  name:"<<name;
			cout<<"\n\n\t account type:"<<acc_type;
			cout<<"\n\n\t account balance:"<<acc_balance;
			
			
		}
	
};
main()
{
	bank a;
	a.get_account();
	a.get_magager();
}

