#include<bits/stdc++.h>
using namespace std;
#define TEZ ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
typedef long int ll;
ll t,n,x,y,s;
int main()
{
	TEZ;
	cin>>t;
	int pow[]= {1 , 2 , 4 , 8 , 16 , 32 , 64 , 128 , 256 , 512 , 1024 , 2048 , 4096 , 8192 , 16384 , 32768 , 65536 , 131072 , 262144 , 524288 , 1048576 , 2097152 , 4194304 , 8388608 , 16777216 , 33554432 , 67108864 , 134217728 , 268435456 , 536870912};
	while(t--)
	{
		cin>>n>>x;
		ll a[n],x1,i,j;
		for(int i=0;i<n;i++)
			cin>>a[i];
		i=0,s=1;
		while(i<n-1 && s<=x )
		{
			while(a[i] == 0 && i<n-2)
				i++;
			for(j=i+1;j<n;j++)
				{
					if(a[i] == 0)
						x1=0;
					else
						x1=upper_bound(pow,pow+30,a[i])-pow-1;
					if((a[j]^pow[x1]) < a[j])
						break;
				}
			
			if(j == n)
				j--;
			cout<<"i="<<i<<" j="<<j<<" s="<<s<<"\n";
			a[i]=a[i]^pow[x1];
			a[j]=a[j]^pow[x1];
			cout<<a[i]<<" "<<a[j]<<endl;
			s++;
			if(a[i] == 0 )
				i++;
		}
		s--;
		if((s%2 != 0 && x%2 == 0 && s != x) || (s%2 == 0 && x%2 != 0 && s != x))
		{
			j=n-1;
			i=n-2;
			if(a[i] == 0)
				x1=0;
			else
				x1=upper_bound(pow,pow+30,a[i])-pow-1;
			a[i]=a[i]^pow[x1];
			a[j]=a[j]^pow[x1];	
		}
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
		
	}

	return 0;
}
