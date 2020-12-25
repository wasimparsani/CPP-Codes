#include<bits/stdc++.h>
using namespace std;


int check(int a[],int s,int n)
{
	int t[n+1][s+1],i,j;
	for(i=0;i<n+1;i++)
		for(j=0;j<s+1;j++)
		{
			if(i==0)
			t[i][j]=false;
			if(j==0)
			t[i][j]=true;
		}
	
	for(i=1;i<n+1;i++)
		for(j=1;j<s+1;j++)
		{
			if(a[i-1]<=j)
				t[i][j]= t[i-1][j-a[i-1]] || t[i-1][j];
			else
				t[i][j]= t[i-1][j];
		}
		for(i=0;i<n+1;i++)
		{
			for(j=0;j<s+1;j++)
			{
				cout<<t[i][j]<<"\t";
			}
			cout<<endl;
		}
		return t[n][s];
	
	
}

int main()
{
	int arr[]={2,3,7,8,10};
	int sum=11;
	int size=sizeof(arr)/sizeof(int);
	int status=check(arr,sum,size);
	cout<<status;
}
