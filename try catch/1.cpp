#include<iostream>
using namespace std;

main()
{
	int a=15,b=0,c;
	
	try
	{
		if(b==0)
		{
			throw "Div by zero not possible";
			c=a/b;
			cout<<c;
		}
	
	}
	catch(const char *e)
	{
		cout<<e;
	}
}
