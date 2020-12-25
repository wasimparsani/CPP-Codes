#include<bits/stdc++.h>
using namespace std;
int t,n,i,a;


int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>t;
	while(t--)
	{
		cin>>n;
		map<int,int> m;
		for(i=0;i<n;i++)
		{
			cin>>a;
			if(m.find(a) == m.end() && a!=0)
				m.insert(make_pair(a,1));
			
		}
		cout<<m.size();
		
	}
	return 0;
}

