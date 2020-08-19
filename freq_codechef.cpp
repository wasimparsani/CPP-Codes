#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll t,n,i,j;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll a[n];
		map<ll,ll> m;
		for(i=1;i<=n;i++) {
			cin>>a[i];
			if(m.find(a[i]) == m.end())
				m.insert(make_pair(a[i],1));
			else
				m[a[i]]++;
		}
		ll max=0;
		ll min=9999;
		map<ll,ll>::iterator it;
		for(it=m.begin();it!=m.end();it++)
		{
			if(it->second > max)
				max=it->second;
		}
		for(it=m.begin();it!=m.end();it++)
		{
			if(it->second == max && it->first < min)
				min=it->first;	
		}
		m[min]++;
		
		if(n>2)
		{
			for(i=1;i<n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
				if(a[i]<a[j] || a[i]==a[j])
					m[a[i]]++;
				else
					m[a[j]]++;
			}
		}
		}
		
		for(i=1;i<=n;i++)
			cout<<m[i]<<" ";
		cout<<"\n";
	}
	return 0;
}
