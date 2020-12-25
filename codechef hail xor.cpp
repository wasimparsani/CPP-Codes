#include<bits/stdc++.h>
using namespace std;
#define TEZ ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
typedef long int ll;
ll t,n,x,y,s,l;
int main()
{
	TEZ;
	cin>>t;
	while(t--)
	{
		cin>>n>>x;
		ll a[n],x1,i,j;
		for(int i=0;i<n;i++)
			cin>>a[i];
		i=0,s=1,l=0;
		while(i<n-1 && s<=x )
		{
			while(a[i] == 0 && i<n-2)
				i++;
			for(j=i+1;j<n;j++)
				{
					if(a[i] == 0)
						x1=0;
					else
						x1=floor(log2(a[i]));
					if((a[j]^(1<<x1)) < a[j])
						break;
				}
			if(j == n)
				j--;
			a[i]=a[i]^(1<<x1);
			a[j]=a[j]^(1<<x1);
			s++;
			if(a[i] == 0 )
				i++;
		}
		s--;
		if(n == 2 && (x-s)%2 != 0 )
		{
			a[n-1]^=(1LL<<0);
			a[n-2]^=(1LL<<0);
		}
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<"\n";
	}
	return 0;
}
