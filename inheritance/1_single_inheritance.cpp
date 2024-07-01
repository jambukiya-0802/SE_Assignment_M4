/*1. Assume a class cricketer is declared. Declare a derived class batsman from 
cricketer. Data member of batsman. Total runs, Average runs and best 
performance. Member functions input data, calculate average runs, Display 
data. (Single Inheritance)*/
#include<iostream>
using namespace std;

class cricketer
{		
    protected:
        string Cname;
	    int C_age;
	    string C_type;
    	int total_match;
	
	public:
		void get_cric()
		{
			cout<<"\n\t name:";
			cin>>Cname;
			
			cout<<"\n\t age:";
			cin>>C_age;
			
			cout<<"\n\t type:";
			cin>>C_type;
			
			cout<<"\n\t total match:";
			cin>>total_match;
		}
		
		void print_cric()
		{
			cout<<"\n\tcricketer name:"<<Cname;
			cout<<"\n\tcricketer age:"<<C_age;
			cout<<"\n\tcricketer type:"<<C_type;
			cout<<"\n\ttotal match:"<<total_match;
		}
	
 } ;
class batsman:public cricketer
 {
 	int B_runs;
 	int B_perf;
 	int B_avr_run;
 	
 	
 	public:
 		void get_bets()
 		{
 			cout<<"\n\tenter the best run:";
 			cin>>B_runs;
 			
 			cout<<"\n\tenter the best perform:";
 			cin>>B_perf;
 		
		 }
		 void get_print()
		 {
		 	cout<<"\n\ttotal run:"<<B_runs;
		 	cout<<"\n\tBest performance="<<B_perf;
		 	int A=B_runs/total_match;
		 	cout<<"\n\tavrege run:"<<A;
		 }
 };
 main()
 {
 	batsman B;

	B.get_cric();
	B.get_bets();
	B.print_cric();
	B.get_print();
 }
