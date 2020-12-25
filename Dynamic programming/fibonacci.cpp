#include<bits/stdc++.h>
using namespace std;

int t[100];

int fib(int n)
{
	if(n<2)
		return t[0]=0;
	if(n==2)
		return t[1]=1;
	if(t[n]!=-1)
		return t[n];
	else
		return t[n]=fib(n-1)+fib(n-2);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	memset(t,-1,sizeof(t));
	int n;
	cin>>n;
	cout<<fib(n);
}
