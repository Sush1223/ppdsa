#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int x=1;
	{
		while(n/x>9)
		{
			x=x*10;
			
		}
		while(x>0)
		
		{
			cout<<"\n"<<n/x;
			x=x/10;
			
		}
	}
}
