#include<bits/stdc++.h>
using namespace std;
#define TEZ ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
typedef long int ll;
ll t,n,d,a;
int main()
{
	TEZ;
	cin>>t;
	while(t--)
	{
		ll r=0,nr=0,count=0;
		cin>>n>>d;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			if(a>=80 || a<=9)
				r++;
			else
				nr++;
		}
		if(d == 1)
			cout<<n<<"\n";
		else
		{
			if(r%d == 0)
				count+=(r/d);
			else
				count+=((r/d)+1);
			if(nr%d == 0)
				count+=(nr/d);
			else
				count+=((nr/d)+1);
			cout<<count<<"\n";
		}
	}
	return 0;
}

