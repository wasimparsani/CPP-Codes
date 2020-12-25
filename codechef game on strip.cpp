#include<bits/stdc++.h>
using namespace std;
int t,i,n,z;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>t;
	while(t--)
	{
		int max=-9999;
		int count=0;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>z;
			if(z == 0)
				count++;
			else
			{
				if(max<count)
					max=count;
				count=0;
			}
		}
		if(max<count)
			max=count;
		
		if(max%2 == 0 && max<=2)
			cout<<"No"<<"\n";
		else
			cout<<"Yes"<<"\n";
			
	}
	return 0;
}
