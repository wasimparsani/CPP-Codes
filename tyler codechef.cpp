#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
	cin>>n;
	int c1=0,c2=0,s=1,coin=0;
	char a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i] == 'U')
		{
			c1++;
		}
		else if(a[i] == 'R')
		{
			c2++;
		}
		if(c1 == c2 && s==c1)
		{
			coin++;
			s++;
		}
	}
	cout<<coin;
	return 0;
}
