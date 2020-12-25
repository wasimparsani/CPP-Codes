#include <bits/stdc++.h>
using namespace std;
long int t,i,c,d,l;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>t;
	while(t--)
	{
		cin>>c>>d>>l;
		if(d*4 > l || l%4 !=0)
		    cout<<"no"<<"\n";
		else
		{
		    if(l/4 == d && c<=2*d)
		        cout<<"yes"<<"\n";
		    else if(l/4 == (c+d))
		        cout<<"yes"<<"\n";
		    else
		    {
		    	if(l/4 > d && c>=((l/4)-d))
		    		cout<<"yes"<<"\n";
		    	else
		    		cout<<"no"<<"\n";
		    		
			}
		}
	}
	return 0;
}
