#include<iostream>
using namespace std;
class area{
	public:  area(int l, int b)
	{
		int area_r =l*b;
		cout<<"\n area of rect is "<<area_r;
	}
	  area()
	 {
	 	float b2=9,h=7;
	 	float area_t= 0.5*b2*h;
	 	cout<<"\n area of triangle is "<<area_t;
	 }
	  area(int r)
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
	area obj1;
	area obj2;
	area obj3;
	
	
	return 0;
}






