#include<bits/stdc++.h>
using namespace std;
int static t[102][1002];
memset(t,-1,sizeof(t));

int Recursion(int wt[] ,int val[] ,int W ,int n)
{
	if (n==0 || W==0)
		return 0;
	if (t[n][w] != -1)
		return t[n][w];
	if(wt[n-1]<=W)
		return t[n][w]=max(val[n-1]+Recursion(wt,val,W-wt[n-1],n-1),Recursion(wt,val,W,n-1));
	
	else if(wt[n-1]>W)
		return t[n][w]=Recursion(wt,val,W,n-1);
	
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int wt[]={1,1,3,5,7};
	int val[]={1,3,4,7,9},w=7;
	int size=sizeof(wt)/sizeof(int);
	cout<<Recursion(wt,val,w,size);
}
