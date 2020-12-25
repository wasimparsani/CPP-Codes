#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long int ll;
ll n1;

void concatenate(ll x) {
    ll pow = 10;
    while(x >= pow)
        pow *= 10;
    n1 = n1 * pow + x; 
	cout<<n1;       
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,k;
	
	cin>>n>>k;
	n1=n;
	while(k--)
		concatenate(n);
	
}
	
