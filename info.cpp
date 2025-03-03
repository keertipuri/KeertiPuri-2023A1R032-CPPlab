#include<iostream>
using namespace std;
class information
{
	public: void info(int pin, string name, int age)
	{
		cout<<"\n pin is "<<pin;
		cout<<"\n name is "<<name;
		cout<<"\n age is "<<age;
	}
};
int main()
{
	string name1;
	int pin1, age1;
	cout<<"enter the pin ";
	cin>>pin1;
	cout<<"enter your name ";
	cin>>name1;
	cout<<"enter your age ";
	cin>>age1;
	information obj;
	obj.info(pin1, name1, age1);
	return 0;
}
