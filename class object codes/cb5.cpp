#include<iostream>
using namespace std;
class palindrome
{
	public:
		int n,num,x,r=0,f=0;
	void input()
	{
		cin>>n;
		
	}
	void calc()
	{
		num=n;
		while(num!=0)
		{
			x=num%10;
			r=r*10+x;
			num=num/10;
		}
		if(n==r)
		{
			f=1;
		}
	}
	void output()
	{
		if(f==1)
		{
			cout<<"palindrome";
		}
	}
	
};
int main()
{
	palindrome p;
	p.input();
	p.calc();
	p.output();
}
