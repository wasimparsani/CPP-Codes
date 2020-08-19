#include<bits/stdc++.h>
using namespace std;
int c1,c2;
int check(int n1,int m1,long int a1)
{
	
	if(n1%a1 == 0)
		c1=(n1/a1);
	else
		c1=(n1/a1)+1;
		
	if(m1%a1 == 0)
		c2=(m1/a1);
	else
		c2=(m1/a1)+1;
	return c1*c2;			
}
int main()
{
    int n,m;
    long int a;
    cin>>n>>m>>a;
    int mx=check(n,m,a);
    cout<<mx;
    return 0;
}
