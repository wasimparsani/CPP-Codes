#include<iostream>
using namespace std;

int call(int **a,int s,int i,int j,int n);


int main() {
	int n,s,v;
	scanf("%d",&n);
	int ar[n][n],i,j;
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&ar[i][j]);
		}
	}
	s=ar[0][0];
	i=j=0;
	v=call(ar,s,i,j,n);
	printf("%d",v);
return 0;
	
}

int call(int (*a)[n],int s,int i,int j,int n)
{
	int k;
	if(i==n-1 or j==n-1) {
		k=a[n-1][n-1];
		s=(s/2)+k;
		return s;
	}
	else
	{
		int c=j++;
		int r=i++;
		if (a[i][c] < a[r][j]) {
			s=(s/2)+ a[i][c];
			call(a,s,i,c,n);
		}
		else {
			s=(s/2)+ a[r][j];
			call(a,s,r,j,n);
		}
	}
}
