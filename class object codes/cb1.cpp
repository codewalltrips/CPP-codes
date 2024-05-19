 #include<iostream>
 #include<math.h>
 using namespace std;
 class rectangle
 {
 	public:
 	int l,b,a,p,d;
 	void input()
 	{
 		cin>>l>>b;
	 }
 	void calculate()
	 {
	 	a=l*b;
	 	p=2*(l+b);
	 	d=sqrt(l*l+b*b);
	 }
	 void output()
	 {
	 	cout<<a<<" "<<p<<" "<<d;
	 }
 	
 };
 int main(void)
 {
 	rectangle r;
 	r.input();
 	r.calculate();
 	r.output();
 }
