#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int temp=n;
	int sum=0;

	while(n>0)
	{
		int y=n%10;
			int fact=1,i=1;
		while(i<=y)
		{
		    
			fact=fact*i;
			i++;
			
		}
		
		sum=sum+fact;
	
		n=n/10;
		
	}
	cout<<sum<<"\n"<<n;
	
	if(sum==temp)
	{
		cout<<"\n yes";
	}
	
	else
	{
		cout<<"\n no";
	}
	
}
