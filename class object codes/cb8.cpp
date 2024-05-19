#include<iostream>
#include<math.h>
using namespace std;
class calculate
{
	public:
		int a,b,sum,diff;
	void input()
	{
		cin>>a>>b;
		
	}
	void calc()
	{
		sum=a+b;
		diff=abs(a-b);
	}
	void output()
	{
		cout<<sum<<" "<<diff;
	}
	
};
int main()
{
	calculate p;
	p.input();
	p.calc();
	p.output();
}
