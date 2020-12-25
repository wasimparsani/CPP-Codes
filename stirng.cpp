#include <bits/stdc++.h>
using namespace std;
long int t,i,k,k1,n,c1,c2;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		vector<int> v(n);
		for(i=0;i<n;i++)
			cin>>v[i];
		vector<int> a(1,0);
		c1=1;
		for(i=0;i<n;i++)
		{
			if(find(a.begin(),a.end(),v[i]) != a.end())
			{
				++c1;
				a.resize(0);
				a.push_back(v[i]);
			}
			else
			{
				a.push_back(v[i]);
			}	
		}
		c1=c1*k;
//		cout<<"c1="<<c1<<"\n";
		c2=0;
		map<int,int> m;
		for(i=0;i<n;i++)
		{
			if(m.find(v[i]) == m.end())
				m.insert(make_pair(v[i],1));
			else
				m[v[i]]++;
		}
		map<int,int>::iterator it;
		for(it=m.begin();it!=m.end();++it)
		{
			if(it->second>1)
				c2+=(it->second);
		}
		c2=c2+k;
//		cout<<"c2="<<c2;
		if(n==0)
			cout<<n<<"\n";
		else
			cout<<min(c1,c2)<<"\n";
	}
	return 0;
}
