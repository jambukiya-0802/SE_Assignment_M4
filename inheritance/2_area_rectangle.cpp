//2. Write a C++ Program to find Area of Rectangle using inheritance 
#include<iostream>
using namespace std;

class rect_c
{
	protected:
		int len;
	
	public:
	    void get_length()
		{
		   cout<<"\n\n\t Enter the length:";
		   cin>>len;
		}
			
};
class rect_w: public rect_c
{
	int w,r;
    public:
        void get_data()
        {
            cout<<"\n\t Enter the Width :";
            cin>>w;
        }
        void print_info()
        {
            r = len* w ;
            cout<<"\n\t Area of Rectangle :"<<r;
        }
};
main()
{
     rect_w obj;
     obj.get_length();
     obj.get_data();
     obj.print_info();
    
}

