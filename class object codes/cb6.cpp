#include<iostream>
using namespace std;
class increment
{
	public:
		char name;
		double basic;
		int age;
	void getdata()
	{
		cin>>name;
		cin>>basic;
		cin>>age;
		}	
	void calc()
	{
		if(age>=56)
		{
			basic=basic+0.20*basic;
		}
		else if(age>=45 && age<56)
		{
			basic=basic+0.15*basic;
		}
		else if(age<45)
		{
		 basic=basic+0.10*basic;	
		}
		else
		{
			cout<<"invalid";
		}
		
		
		}
	void display()
	{
		cout<<name<<"    "<<age<<"     "<<basic;
			}		
};
int main()
{
	increment i;
	i.getdata();
	i.calc();
	i.display();
	
	
	
}

