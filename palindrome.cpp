#include<iostream>
using namespace std;
class palindrome{
	public: int n, rev=0;
	public: palindrome(int a)
	{
		n=a;
	}
	void checking()
	{
		int temp = n;
		while(temp>0)
		{
			int digit=temp%10;
			rev = rev*10+digit;
			temp /= 10;
		}
		if(rev==n)
		{
			cout<<"\n the number is palindrome";
		}
		else
		{
			cout<<"\n thr number is not palindrome";
		}
	}
};
int main()
{
	palindrome obj(123);
	obj.checking();
	return 0;
}
