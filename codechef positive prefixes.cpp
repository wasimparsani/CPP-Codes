#include<bits/stdc++.h>
using namespace std;
#define TEZ ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
int t,n,k;
int main()
{
	TEZ;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int s=1,p=1;
		for(int i=1;i<=n;i++)
		{
			if(i%2 == 0 && s<=(n-k))
			{
				cout<<-i<<" ";
				s++;
			}
			else if(s<=(n-k) && p>k)
			{
				cout<<-i<<" ";
				s++;
			}
			else
			{
				cout<<i<<" ";
				p++;
			}
		}
		cout<<endl;
	}
	return 0;
}

