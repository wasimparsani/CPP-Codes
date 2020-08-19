#include<bits/stdc++.h>
using namespace std;
int sum=0;
int print(int k)
{
	int r;
	if(k==0)
		return sum;
	r=k%10;
	k=k/10;
	sum+=r;
	print(k);
	
}

int main()
{
	int n;
	cin>>n;
	int s=print(n);
	cout<<s;
	return 0;
}
