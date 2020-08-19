#include<bits/stdc++.h>
using namespace std;
int t,n,b;
int a[1000];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int i,s=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int m=1;
		for(i=0;i<n;i++) { 
			cin>>a[i]; 
			m*=a[i];
		}
		if(m%2!=0)
			cout<<"YES"<<"\n";
		else
			cout<<"NO"<<"\n";
		
	}
}
