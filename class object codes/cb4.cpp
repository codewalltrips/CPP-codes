#include<iostream>
using namespace std;
class security
{
	public:
		char name;
		int h;
		double r,c;
	void get()
	{
		cin>>name;
		cin>>r;
		cin>>h;
		}	
	void calc()
	{
		
		if(h<=40)
		{
			c1=r*h;
		}
		if(h<=60)
		{
			c2=c1+1.5*r*h;
		}
		if(h<=70)
		{
			c3=c2+2*r*h;
		}
		if(h>70)
		{
			cout<<"not allowed";
		}
		
		
	}	
		
}
