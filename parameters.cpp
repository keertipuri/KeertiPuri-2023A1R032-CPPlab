#include<iostream>
using namespace std;
class MYAPP
{
	public: void inline accept(string email,string password)// formal parameters
	{
		cout<<"information entered by the user is(accept)";
		cout<<"\n email = "<<email<<"\n password is = "<<password;
	
	}
};
int main()
{
	MYAPP obj;
	string email1, password1;
	cout<<"\n enter yout email";
	cin>> email1;
	cout<<"\n enter your passsowrd";
	cin>>password1;
	obj.accept(email1,password1);
	return 0;
}
