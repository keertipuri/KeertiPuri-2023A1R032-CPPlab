/*e.g. multilevel inheritance*/
//sequence of execution of constructor and destructor in multiple inheritance depends on the sequence of placing base class in syntax.
//In multiple inheritance there is no rrelationship between parent classes, we cannot access member function of a parent class in another parent class but a child can 
// extend multiple parent classes at a time and can access attributes on multiple parent classes.

#include<iostream>
using namespace std;
class parent1{
	public: parent1()
	{
		cout<<"\n parent1 constructor";
	}
	public: ~parent1()
	{
		cout<<"\n parent1 destructor";
	}
};
class parent2{
	public: parent2()
	{
		cout<<"\n parent2 constructor";
	}
	public: ~parent2()
	{
		cout<<"\n parent2 destructor";
	}
};
class child: public parent1, public parent2{
	public : child()
	{
		cout<<"\n child1 constructor";
	}
	public: ~child()
	{
		cout<<"\n child1 destructor";
	}
};
int main()
{
	child obj;
	return 0;
}
// home work
// in  this scenario of hierarchical inheritance we have multiple child classes and in this we have multiple constructor and destructor so is this an advantage or disadvantage and y?














