#include<iostream>
using namespace std;
class sort
{
	public:
		int arr[10],i,t,mid,tg,lb=0,ub=9,j;
	void arrange()
	{
	 for(i=0;i<=9;i++)
	 {
	 	for(j=0;j<=9;j++)
	 	{
	 		if(arr[j]>arr[j+1])
	 		{
	 			t=arr[j];
	 			arr[j]=arr[j+1];
	 			arr[j+1]=t;
			 }
		 }
     }
     for(i=0;i<=9;i++)
     {
     	cout<<arr[i]<<" ";
	 }
	 cout<<endl;
		}
		
	void search(int tg)
	{
		while(lb<ub)
		{
			mid=(lb+ub)/2;
			if(arr[mid]==tg)
			{
				cout<<mid;
				break;
				
			}
			else if(arr[mid]>tg)
			{
				ub=mid-1;
			}
			else
			{
				lb=mid+1;
			}
		}
			}		
};
int main()
{
	int arr[10],tg;
	cin>>tg;
	sort s;
	s.arrange();
	s.search(tg);
}
