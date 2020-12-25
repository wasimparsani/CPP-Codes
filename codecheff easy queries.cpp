#include <bits/stdc++.h>
using namespace std;

#define TEZ ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
int t,n,k,a,i;

int main()
{
    
    cin>>t;
    while(t--)
    {
        int sum=0,s=0;
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++) 
            cin>>a[i];
        for(i=0;i<n;i++)
		{
			if(a[i]>k)
                sum+=(a[i]-k);
            else if((sum + a[i] )< k)
            {
                s=i+1;
                break;
			}
            else if((sum + a[i] ) == k)
                sum=0;
            else
				sum=(sum+a[i])-k;   
            
        }
		     
        if(s!=0)
            cout<<s<<"\n";
        else
            cout<<(sum/k)+(n+1)<<"\n";
    }
    return 0;
}
