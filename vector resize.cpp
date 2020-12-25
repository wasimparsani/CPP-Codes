#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v;
	int t;
	for(int i=0;i<5;i++)
	{
		cin>>t;
		v.push_back(t);
	}
	v.resize(9);
	for(int i=0;i<5;i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}
