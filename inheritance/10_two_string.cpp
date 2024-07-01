//10.Write a program to concatenate the two strings using Operator Overloading
#include<iostream>
using namespace std;

class String {
    string str;
public:
    void accept_string() 
	{
        cout<<"\n\tEnter String : ";
        cin>>str;
    }
    void display_string() 
	{
        cout<<str;
    }
    String operator+(String &x)
	 { 
        String s;
        s.str = x.str + str; 
        return s;
    }
};

int main() {
    String str1, str2, str3;
    str1.accept_string();
    str2.accept_string();
    cout<<"\n\n\tFirst String is : ";
    str1.display_string();
    cout<<"\n\n\tSecond String is : ";
    str2.display_string();
    str3 = str1 + str2;
    cout<<"\n\n\tConcatenated String is : ";
    str3.display_string();
    
}
