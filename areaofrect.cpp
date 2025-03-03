#include<iostream>
using namespace std;
class area
{
	public: void set_dim(int length, int breadth)
	{
		cout<<"\nlength is "<<length;
		cout<<"\n breadth is "<<breadth;	
	}
	public : void get_area(int area)
	{
		cout<<"\n area = "<<area;
	}
	
};
int main()
{
	int length1, breadth1, area1;
	cout<<"\n enter length ";
	cin>>length1;
	cout<<"\n enter breadth ";
	cin>>breadth1;
	area1=length1*breadth1;
	area obj;
	obj.set_dim(length1, breadth1);
	obj.get_area(area1);
	return 0;
	
	
}
