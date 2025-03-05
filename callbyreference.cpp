//method 1 call by reference (passing object as parameter)
#include<iostream>
using namespace std;
class program{
	public: int a;
	program(int b){
		a=b;
	}
	void display(){
		cout<<"value of a is "<< a;
	}
};
void modify(program &obj2){
	obj2.a=20;
}
int main(){
	program obj1(10);
	obj1.display();
	modify(obj1);
	obj1.display();
}
