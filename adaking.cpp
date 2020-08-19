#include<bits/stdc++.h>
using namespace std;

int t,n,m,i,j,k,temp=1000,temp1=1000;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>t;
	while(t--)
	{
		cin>>n;
		k=64-2*n;
		m=64-n;
		for(i=1;i<=8;i++)
		{
			for(j=1;j<=8;j++)
			{
				if(i*j <= k){
					temp=i;
					cout<<". ";
				}
				else if( i> temp && i*j <= m)
				{
					temp1=i;
					cout<<"X ";
				}
				else if(i>temp1 && i*j <= 56)
					cout<<". ";
				else if(i*j == 64)
					cout<<"O ";
				
					
			}
			cout<<"\n";
		}
	}
}
