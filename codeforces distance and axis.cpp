#include<bits/stdc++.h>
using namespace std;
int t,n,k;
int f;
int main()
{
	
	cin>>t;
	while(t--)
	{
		int cnt=0;
		cin>>n>>k;
		if(n == k)
			cout<<"0"<<"\n";
		else if(n<k)
			cout<<k-n<<"\n";
		else if(n>k)
		{
			while((n/2 -0)-(n-n/2) != k)
			{
				n++;
				cnt++;
			}
			cout<<cnt<<"\n";
		}
	}
	return 0;
}
