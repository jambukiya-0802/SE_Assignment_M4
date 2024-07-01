//13.Write a program to find the max number from given two numbersusing friend function
#include<iostream>
using namespace std;

class max_num
{
	private:
    int a ,b;
    public:
        void get_value()
        {
            cout<<"\n\t Enter the value a : ";
            cin>>a;
            cout<<"\n\t Enter the value b : ";
            cin>>b;
        }
};
void max_value(max_num F)
{
     if (F.a>F.b)
     {
        cout<<"\n\t A maximumm number :"<<F.a;
     }
     else
     {
        cout<<"\n\t B  maximumm number :"<<F.b;
     }
}
main()
{
     max_num m;
     m.get_value();
     max_value();
}

