#include<bits/stdc++.h>
using namespace std;
typedef long int ll;
int t,n,i,x=0;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>t;
	while(t--)
	{
		int k=0;
		cin>>n;
		ll a[n],b[n-1];
		for(i=0;i<n;i++){
			cin>>a[i];
			if(i>0)
			{
				b[k++]=a[i-1]-a[i];
			}
		}
	
		int same,max=-999,count=0;
		same=b[0];
		for(i=0;i<n-1;i++)
		{
			if(b[i] == same)
			{
				count++;
			}
			else
			{
				if(max<count)
					max=count;
				count=0;
				same=b[i];
				count++;
			}
		}
		if(max < count)
			max=count;
		cout<<"Case #"<<++x<<": "<<max+1<<"\n";
			
	}
	return 0;
}
