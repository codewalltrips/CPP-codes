/*meter to feet convertion and vice versa*/
#include<iostream>
#include<stdlib.h>

using namespace std;

class Feet;
class Meter;

class Meter
{
	int m,cm;
	public:
		void input1()
		{
			cout<<"Enter the distace"<<endl;
			cout<<"meter: ";
			cin>>m;	
			cout<<"centimeter: ";
			cin>>cm;
		}
		friend void add(Meter, Feet);
		void show1()
		{
			cout<<"The resultant distance: ";
			cout<<m<<" meter "<<cm<<" centimeter "<<endl;
		}
};
class Feet
{
	int ft,inch;
	public:
		void input()
		{
			cout<<"Enter the distace"<<endl;
			cout<<"feet: ";
			cin>>ft;	
			cout<<"inches: ";
			cin>>inch;
		}
		friend void add(Meter, Feet);
		void show()
		{
			cout<<"The resultant distance: ";
			cout<<ft<<" feet "<<inch<<" inches "<<endl;
		}
};

int main()
{
	int ch;
	Meter x;
	x.input1();
	Feet y;
	y.input();
	add(x,y);
}

void add(Meter x, Feet y)
{
	int ch,c;
	Meter R;
	Feet Rf;
	int p,q,r;
	p=(x.m*100)+x.cm;
	q=((y.ft*12)+y.inch)*2.54;
	r=p+q;
	do
	{
		cout<<"\n***MENU FOR CONVERSTION***"<<endl;
		cout<<"\n1.Meter to feet"<<endl<<"2.Feet to meter"<<endl<<"3.Exit"<<endl;
		cout<<"Enter your choice: "<<endl;
		cin>>ch;
		switch (ch)
		{
			case 1: R.m=r/100;
					R.cm=r-(R.m*100);
					R.show1();
					break;
			case 2: r=r/2.54;
					Rf.ft=r/12;
					Rf.inch=r-(Rf.ft*12);
					Rf.show();
					break;
			case 3:cout<<"Thank you!";
					exit(0);
			default: cout<<"Invalid choice!";
		}
		cout<<"Do you wish to continue? press 1 else 0  :";
		cin>>c;
	}while(c==1);
}
