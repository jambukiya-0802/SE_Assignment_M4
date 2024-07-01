/*4. Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference.*/


#include<iostream>
using namespace std;

class circle
{
	private:
		int radius,c,a;
		
	public:
		void get_vlaue()
		{
			cout<<"\n\n\t Enter the radius:";
			cin>>radius;
		}
		void circle_area()	
		{
			a=3.14*radius*radius;
			cout<<"\n\n\t Area of circle:"<<a;
		}
		void circumference()
		{
			c=2*3.14*radius;
			cout<<"\n\n\t circumference of cirecle:"<<c;
		}
};
main()
{
	circle c;
	c.get_vlaue();
	c.circle_area();
	c.circumference();
}
