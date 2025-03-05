#include<iostream>
using namespace std;
class bankapp{
	public: int acn, acb;
	public: bankapp(int a, int b)
	{
		acn=a;
		acb=b;
	}
	void display()
	{
		cout<<"account number is "<< acn;
		cout<<"account balance is "<< acb;
	}
};
void modify(bankapp &obj1)
{
	obj1.acn=5678;
	obj1.acb=8910;
}
int main()
{
	bankapp obj(43567, 5000);
	obj.display();
	modify(obj);
	obj.display();
	
}
