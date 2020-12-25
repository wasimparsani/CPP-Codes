#include<bits/stdc++.h>
using namespace std;

int t,n,i,j,a,b,c,z,v;
int main()
{
	int k=0;
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>t;
	while(t--)
	{
		int s=0;
		cin>>n>>a>>b>>c;
		int arr[n],brr[n];
		memset(arr,0,sizeof(arr));
		
			if((a+b-c) > n || (a + b - c == 1 && n >= 2))
				s=1;
			
			else if( a==c)
			{	z=n;
				for(j=c-1;j>=0;j--)
				{
					arr[j]=z;
					z--;
				}
				b=b-c;
				for(j=n-b;j<=n-1;j++)
				{
					arr[j]=z;
					z--;
				}
				for(j=0;j<n;j++)
				{
					if(arr[j] == 0)
					{
						arr[j]=z;
						z--;
					}
				}
			}
			else if( a!=c)
			{
				z=n;
				for(j=a-1;j>=a-c;j--) {
					arr[j]=z;
					z--;
				}
				a=a-c;
				for(j=a-1;j>=0;j--)
				{
					arr[j]=z;
					z--;
				}
				b=b-c;
				for(j=n-b;j<=n-1;j++)
				{
					arr[j]=z;
					z--;
				}
				for(j=0;j<n;j++)
				{
					if(arr[j] == 0)
					{
						arr[j]=z;
						z--;
					}
				}
				
			}
			
			cout<<"Case #"<<++k<<": ";
			if(s==1)
				cout<<"IMPOSSIBLE"<<"\n";
			else{
				for(i=0;i<n;i++)
				{
					cout<<arr[i]<<" ";
				}
				cout<<"\n";
			}

		
	}
	return 0;
}
