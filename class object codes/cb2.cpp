#include<iostream>
using namespace std;
class salary
{
	public:
		char name,subject;
		char address[10];
		int phone,sal,tax;
	void input()
	{
		cin>>name;
		cin>>subject;
		
		gets(address);
		cin>>phone;
		cin>>sal;
		
	
    }
	void output()
	{
	  cout<<name<<endl;
	  cout<<subject<<endl;
	  
	  cout<<address<<endl;
	  cout<<phone<<endl;
	  cout<<sal<<endl;
	  	
	}	
	void calc()
	{
		if(sal*12>185000)
		{
			tax=0.05*12*sal;
			cout<<tax;
		}
	}
};
int main(void)
{
	salary s;
	s.input();
	s.output();
	s.calc();
}
