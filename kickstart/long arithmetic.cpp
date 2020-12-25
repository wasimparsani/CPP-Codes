#include<bits/stdc++.h>
using namespace std;
typedef long int ll;
int t,n,i;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>t;
	while(t--)
	{
		int k=0;
		cin>>n;
		ll a[n],b[n-1];
		for(i=0;i<n;i++){
			cin>>a[i];
			if(i>0)
			{
				b[k++]=a[i-1]-a[i];
			}
		}
		map<ll,ll> m;
		for(i=0;i<n-1;i++)
		{
			if(m.find(b[i]) == m.end())
				m.insert(make_pair(b[i],1));
			else
				m[b[i]]++;
		}
		
		int max=-9999;
		map<ll,ll>::iterator it;
		for(it=m.begin();it!=m.end();it++)
		{
			cout<<it->first<<" "<<it->second<<endl;
		}
		for(it=m.begin();it!=m.end();it++)
		{
			if(it->second > max)
				max=it->second;
		}
		cout<<"Case #1: "<<max+1<<"\n";	
	}
	return 0;
}
