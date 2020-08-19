#include<bits/stdc++.h>
using namespace std;
int t[6][5];
int ncr(int n,int r)
{
	if(n==r || r==1)
		return t[n][r]=1;
		
	if(t[n][r] != -1)
		return t[n][r];
	else
		return t[n][r]=ncr(n-1,r-1)+ncr(n-1,r);
}

int main()
{
	int n,r;
	n=4;
	r=3;
	int a[]={1,2,3,4,5};
	memset(t,-1,sizeof(t));
	
	for(int i=1;i<=n;i++)
	{
		int x=ncr(n,i);
		cout<<x<<" ";
	}
}
