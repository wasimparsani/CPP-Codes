#include <bits/stdc++.h>
using namespace std;
long int t,n,d;

int main() {
	cin>>t;
	while(t>0){
	    t--;
	    int risk=0;
	    int days=0;
	    cin>>n>>d;
	    for(int i=0;i<n;i++){
	        int p;
	        cin>>p;
	        if(p>=80 || p<=9) risk++;
	    }
	    
	    int not_risk=n-risk;
	    days= (not_risk/d + not_risk%d) + (risk/d + risk%d);
	    cout<<days<<endl;
	    
	}
	return 0;
}
