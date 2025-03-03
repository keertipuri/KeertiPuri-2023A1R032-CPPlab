#include<iostream>
using namespace std;
class program
{
	private: int adv[5]={1,2,3,4,5};
	int weak[5]={6,7,8,9,2};
	int i;
	public: void display()
	{
		cout<<"list of advance learners \t";
		for(i=0;i<5;i++)
		{
			cout<<adv[i]<<"\t";
		}
		cout<<"list of weak learners \t";
		for(i=0;i<5;i++)
		{
			cout<<weak[i]<<"\t";
		}
		
		
	}
};
int main()
{
	program obj;
	obj.display();
	return 0;
}
