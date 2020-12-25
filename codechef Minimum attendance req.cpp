#include<bits/stdc++.h>
using namespace std;
#define TEZ ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
int t,n;
int main()
{
	TEZ;
	cin>>t;
	while(t--)
	{
		int yes=0;
		cin>>n;
		string str;
		cin>>str;
		for(int i=0;i<n;i++)
		{
			if(str[i] == '1')
				yes++;
		}
		yes+=(120-n);
		if(yes >= 90)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}

