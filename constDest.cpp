#include<iostream>
using namespace std;
class program
{
	public: program()
	{
		cout<<"\n default constructor ";
	}
	public: ~program()
	{
		cout<<"\ndestructor ";
	}
	public : idiot()
	{
		cout<<"\n u r an idiot ";
	}
};
int main()
{
	program obj;
	obj.idiot();
	return 0;
}
