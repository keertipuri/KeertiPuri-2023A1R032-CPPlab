#include <iostream>
using namespace std;



int main(){
	int n,fact=1;
	cout<<"enter a number";
	cin>>n;
	if (n < 1) return false;
    for (int i = 1; i <=n; i++) {
        
        fact *= i;
        
    }
    cout<<"factorial of "<<n<<"is"<<fact;
    return 0;
}
