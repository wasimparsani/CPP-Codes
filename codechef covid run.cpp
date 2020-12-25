#include <bits/stdc++.h>
using namespace std;

#define TEZ ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int t,n,k,x,y,i;

int main()
{
	TEZ;
    cin>>t;
    while(t--)
    {
    	int s=0;
        cin>>n>>k>>x>>y;
        if(k>=n)
            k=k-n;
        if(x == y || k==1)
            cout<<"YES\n";
        else if( x!=y && k==0)
            cout<<"NO\n";
        else
        {
            if(x>y)
            {
            	for(i=x;i<=n-1;)
            	{
            		if((i+k)%n == y)
            		{
            			s=1;
            			break;
					}
					i+=(i+k)%n;
				}
				for(i=0;i<x;)
            	{
            		if((i+k)%n == y)
            		{
            			s=1;
            			break;
					}
					i+=(i+k)%n;
				}
			}
			if(s==1)
				cout<<"YES\n";
			else
				cout<<"NO\n";	
        }
    }
    return 0;
}
