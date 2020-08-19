#include <bits/stdc++.h>
using namespace std;

// typedef long int ll;

int t,a,b,c1,c2;

int count(int x){
    if(x<10)
    	return 1;
    else
    	return 2;
}

int main()
{
	cin>>t;
	while(t--) {
	    cin>>a>>b;
	    if(a<=18)
	    	c1=count(a);
	    else
	    	if(a%9 == 0)
	    		c1=a/9;
	    	else
	    		c1=(a/9)+1;
	    	
	    if(b<=18)
	    	c2=count(b);
	    else
	    	if(b%9 == 0)
	    		c2=b/9;
	    	else
	    		c2=(b/9)+1;
	    		
	    if(c1>c2 || c1==c2)
	    	cout<<"1 "<<c2<<"\n";
	    else
	    	cout<<"0 "<<c1<<"\n";
	}
return 0;
}

