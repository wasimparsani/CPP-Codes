#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
	cin>>n;
	int l=0,r=0,s=0,d=0;
	char a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i] == '(')
			l++;
		else
			r++;
	}
	if (n%2 !=0 || l!=r)
		cout<<"No";
	else if(n == 2 && l==r)
		cout<<"Yes";
	else if(n == 2 && l!=r)
		cout<<"No";
	else
	{
		for(int i=0;i<n;i++)
		{
			if(a[i] == '(')
				d++;
			else
				d--;
			if(d<0 && s<=1)
			{
				s++;
			}
			else if(d<0 && s>1)
			{
				cout<<"No";
				break;
			}
		}
		if(d==0 && s<=1)
			cout<<"Yes";
	}
return 0;
}
