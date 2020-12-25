
#include<bits/stdc++.h>
using namespace std;

int t,n,i,j,temp;
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>t;
	while(t--)
	{
		int count=0,s=0;
		cin>>n;
		int a[n][n];
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				cin>>a[i][j];
		}
		
		for(i=n-1;i>0;i--)
		{
			if(a[0][i] != (i+1))
			{
				count++;
				for(j=n-1;j>0;j--)
				{
					temp=a[0][j];
					a[0][j]=a[j][0];
					a[j][0]=temp;
				}
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}
