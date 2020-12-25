#include<bits/stdc++.h>
using namespace std;
#define TEZ ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
long int t,x,y,k,n;

int main()
{
	TEZ;
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>k>>n;
		if(abs(x-y)%(2*k) != 0)
			cout<<"No\n";
		else
			cout<<"Yes\n";
	}
	return 0;
}

