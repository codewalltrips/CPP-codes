#include<iostream>
using namespace std;
class operate
{
	public:
		string s;
		int i,c=0,d=0,sp=0,lwr=0,upr=0;
	void input(string st)
	{
		s=st;
		}
	void check()
	{
		for(i=0;s[i]!='\0';i++)
		{
			c++;
			if(s[i]>='0' && s[i]<='9')
			{
				d++;
			}
			if(s[i]==' ')
			{
				sp++;
			}
			if(s[i]>='a'&& s[i]<='z')
			{
				lwr++;
			}
			if(s[i]>='A'&& s[i]<='Z')
			{
				upr++;
			}
		}
		cout<<c<<"  "<<d<<"  "<<sp<<"  "<<lwr<<"  "<<upr;
			}
					
};
int main()
{
	string s;
	operate op;
	cin>>s;
	op.input(s);
	op.check();
}

