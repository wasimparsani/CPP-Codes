#include<bits/stdc++.h>
using namespace std;
int t,i,n;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>t;
	while(t--)
	{
		int max=-9999,min=9999;
		cin>>n;
		int a[n];
		map<int,int> m;
		for(i=0;i<n;i++) {
			cin>>a[i];
			if(m.find(a[i]) == m.end())
				m.insert(make_pair(a[i],1));
			else
				m[a[i]]++;
		}
		map<int,int>::iterator it;
		map<int,int> m1;
		for(it=m.begin();it!=m.end();it++)
		{
			if(m1.find(it->second) == m.end())
				m1.insert(make_pair(it->second,1));
			else
				m1[it->second]++;
		}
		for(it=m1.begin();it!=m1.end();it++)
		{
			if(it->second > max)
				max=it->second;
		}
		for(it=m1.begin();it!=m1.end();it++)
		{
			if(it->second == max && it->first< min)
				min=it->first;
		}
		cout<<min<<"\n";
		
	}
	return 0;
}
