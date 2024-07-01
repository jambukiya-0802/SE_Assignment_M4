/*5. Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter.*/

#include<iostream>
using namespace std;

class rectangle
{

		int l,w,a,p;
		
		public:
			
		void get_value()
		{
			cout<<"\n\n\t Enter the length of rectangle:";
			cin>>l;
			cout<<"\n\n\t Enter the width of rectangle:";
			cin>>w;
			
		}
		

    void rectangle_area()
    {
	   a = w * l ;
       cout<<"\n\n\t Area Of Rectangle :"<<a;
	}
	void rectangle_perimeter()
	{
		p=2*(l + w);
        cout<<"\n\n\t Perimeter Of Rectangle :"<<p;
	}
};
main()
{
	rectangle r;
	r.get_value();
	r.rectangle_area();
	r.rectangle_perimeter();
}
	
