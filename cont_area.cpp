#include<iostream>
using namespace std;

class area{
	private : float length, breadth;
	public: area(float l, float b)
	{
		length=l;
		breadth=b;
	}
	public: give_area()
	{
		float area = length*breadth;
		cout<<"\n area of rectangle is "<<area;
	}
};
int main()
{
    float length, breadth;
	cout<<"enter length ";
	cin>>length;
	cout<<"enter breadth ";
	cin>>breadth;
	area obj(length,breadth);
	obj.give_area();
	
}
