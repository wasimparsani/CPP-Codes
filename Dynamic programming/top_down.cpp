#include<bits/stdc++.h>
using namespace std;


int Recursion(int wt[] ,int val[] ,int W ,int n)
{
	int t[n+1][W+1],i,j;
	
	for(i=0;i<n+1;i++)
		for(j=0;j<W+1;j++)
		{
			if( i==0 || j==0 )
				t[i][j]=0;
		}
		
	for(i=1;i<n+1;i++)
		for(j=1;j<W+1;j++)
		{
			if(wt[i-1]<=j)
				t[i][j]= max(val[i-1] + t[i-1][j-wt[i-1]], t[i-1][j]);
			else
				t[i][j]= t[i-1][j];
		}
		
		for(i=0;i<n+1;i++)
		{
			for(j=0;j<W+1;j++)
			{
				cout<<t[i][j]<<"\t";
			}
			cout<<endl;
		}
		return t[n][W];
	
	
	
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
