#include<bits/stdc++.h>
using namespace std;
#define TEZ ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main()
{
	TEZ;
	int a[]={1,2,4,8,16,32,64};
	int n=7;
	int u=upper_bound(a,a+n,0)-a-1;
	cout<<u;
	return 0;
}

