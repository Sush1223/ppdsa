#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cin>>a>>b;
	int ans=0;
	// jab ans=0 likh kar loop main ans++ operation pehle perform karna ho else ans=1 operation operation perform kar ke ans++;
/*	do
	{
		ans++;
		
		a=a*3;
		b=b*2;
	}
	while(a<=b);
	*/
	
	while(a<=b)
	{
		ans++;
		a=a*3;
		b=b*2;
	 } 
	
	cout<<ans;
	
	
 } 
