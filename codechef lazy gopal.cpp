#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
	cin>>n;
	int c1=0,c2=0;
	char a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i] == 'L')
		{
			c1++;
		}
		else if(a[i] == 'R')
		{
			c2++;
		}
		
	}
	cout<<c1+c2+1;
	return 0;
}
