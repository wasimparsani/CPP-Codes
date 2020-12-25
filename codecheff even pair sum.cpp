#include<bits/stdc++.h>
using namespace std;
#define TEZ ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
typedef long int ll;
ll t,a,b;
int main()
{
	TEZ;
	cin>>t;
	while(t--)
	{
		ll oa,ob,ea,eb;
		cin>>a>>b;
		if(a%2 != 0)
		{
			oa=(a+1)/2;
			ea=(a-1)/2;
		}
		else
		{
			oa=a/2;
			ea=a/2;
		}
		if(b%2 != 0)
		{
			ob=(b+1)/2;
			eb=(b-1)/2;
		}
		else
		{
			ob=b/2;
			eb=b/2;
		}
		cout<<(oa*ob)+(ea*eb)<<"\n";
	}

	return 0;
}

