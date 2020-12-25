#include<bits/stdc++.h>
using namespace std;

int t,n,i,a,j;
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	list<list<int> > l;
	list<int> l1;
	l1.push_back(2);
	l1.push_back(4);
	l1.push_back(5);l1.push_back(7);
	l.push_back(l1);
	
    for(j=0; j<l.size();j++)
    	cout<< l[j]<<" ";

	return 0;
}
