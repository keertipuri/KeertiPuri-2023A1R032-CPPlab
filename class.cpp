#include<iostream>
using namespace std;
class program
{
	public: program(string name,int pin)
	{
		cout<<"\n name is "<<name;
		cout<<"\n pin is "<<pin;
	}
};
int main()
{
	string  name1;
	int pin1;
	cout<<"\n enter name ";
	cin>>name1;
	cout<<"\n enter pin ";
	cin>>pin1;
	program obj(name1, pin1);
	return 0;
}
