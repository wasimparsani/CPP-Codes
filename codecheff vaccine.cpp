#include<bits/stdc++.h>
using namespace std;
#define TEZ ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
int d1,d2,v1,v2,p,i,sum=0;

int main()
{
	TEZ;
	cin>>d1>>v1>>d2>>v2>>p;
	for(i=1;i<i+1;i++)
	{
		if(sum >= p)
			break;
		if(i >= d1 )
			sum+=v1;
		if(i >= d2)
			sum+=v2;
	}
	cout<<i-1<<"\n";
	return 0;
}

