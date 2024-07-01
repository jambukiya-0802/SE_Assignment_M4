/*4. Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account.*/

#include<iostream>
using namespace std;

class Bank_account
{
	int a_no;
	int a_bal;
	int w,d;
	
	public:
          	void account_details()
         	 {
          		cout<<"\n\t Enter the Account Number : "; 
            	cin>>a_no;
            	cout<<"\n\t Enter Account Balance=";
            	cin>>a_bal;
			  }
			void account_withdraw() 
			{	
				cout<<"\n\t Enter the Withdraw Ammount: ";
				cin>>w;
				a_bal = a_bal - w ;
				cout<<"\n\t Available Balance : "<<a_bal ;  
			}  
			void account_deposit()   
			{
				cout<<"\n\t Enter the Deposit Ammount : ";
				cin>>d;
				a_bal = a_bal + d ;
				cout<<"\n\t Your Updated Balance : "<<a_bal; 
			}
				void print_details()    
			{
				cout<<"\n\t Account Number : "<<a_no;
				cout<<"\n\t Account Balance : "<< a_bal;
			}  
};
main()
{
	Bank_account S;
	S.account_details();

	S.account_withdraw();

	S.account_deposit();

	S.print_details();
		
}
