#include<iostream>

using namespace std;
int main()
{
	 int p,  d,  m,  s;
	 cin>>p>>d>>m>>s;
	int count =0;
    int sum=0;
    while(1)
    {
        sum=sum+p;
        count++;
        if(sum<=s)
        {
            if(p-d>=m)
            {
                p=p-d;
               
            }
            else {
            p=m;
            }
        }
        else {
        break;
        }
    }
    
    cout<<" "<<count-1;

}
