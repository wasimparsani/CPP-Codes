#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

typedef long int ll;
ll t,n,x,i,a,j,k=1;
int main()
{
    cin>>t;
    while(k<=t)
    {
    	
        int s=0,l=0;
        cin>>n>>x;
        ll a[n],b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        cout<<"Case #"<<k<<": ";
    
        for(i=0;i<n;i++)
        {
        	if(a[i]<=x)
        		cout<<i+1<<" ";
		}
		for(i=0;i<n;i++)
        {
        	sort(a,a+n);
        	if(a[i]>x)
        	{
        		auto itr = find(b,b+n,a[i]);
        		cout<<distance(b,itr)<<" ";
			}
        }
			
        cout<<"\n"; 
		k++;   
        
    }
    return 0;
}
