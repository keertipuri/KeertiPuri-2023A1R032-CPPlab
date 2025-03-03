#include<iostream>
using namespace std;
class shapes{
	public: void area(int l, int b)
	{
		int area_r =l*b;
		cout<<"\n area of rect is "<<area_r;
	}
	 void area()
	 {
	 	float b2=9,h=7;
	 	float area_t= 0.5*b2*h;
	 	cout<<"\n area of triangle is "<<area_t;
	 }
	 void area(int r)
	 {
	 	
	 	int area_c = 3.14*r*r;
	 	cout<<"\n area of circle is "<<area_c;
	 }
};
int main()
{
	int l1,b1,r1;
	int area_r1, area_t1, area_c1;
	cout<<"\n enter l and b ";
	cin>>l1;
	cin>>b1;

	cout<<"\n enter r ";
	cin>>r1;
	shapes obj;
	obj.area(l1,b1);
	obj.area(r1);
	obj.area();
	
	return 0;
}




























