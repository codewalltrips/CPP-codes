#include<iostream>
using namespace std;
class prime
{
	public:
		int n,i,c=0,f=0;
	void input()
	{
		cin>>n;
		
	}
	void calc()
	{
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				c++;
			}
		}
		if(c==2)
		{
			f=1;
		}
	}
	void output()
	{
		if(f==1)
		{
			cout<<"prime";
		}
	}
	
};
int main()
{
	prime p;
	p.input();
	p.calc();
	p.output();
}
