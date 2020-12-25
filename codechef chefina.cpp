#include <bits/stdc++.h>
using namespace std;
int i,n,t;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
	cin>>t;
	while(t--){
		int cnt=0,mid=0,s1=0,mid_sum=0,j=0;
	    cin>>n;
	    if (n==3)
	    	cout<<"2"<<endl;
		else if ((n*(n+1))%4==0){
	    	mid_sum= (n*(n+1))/4;
	        int arr[n],b[n];
	        vector<int> v;
	    	for (i=0;i<n;i++){
	        	arr[i]=i+1;
	    	}
	    	mid=n/2;
	    	for (i=0;i<n;i++){
	    		s1=0;
	    		for (j=mid;j<n;j++){
	    			copy(arr,arr+n,b);
	        		swap(b[i],b[j]);
					int index=0;
	        		label1:
	            		s1+=b[index++];
	            		if (s1<mid_sum){
	                		goto label1;
	            		}
	        		if (s1==mid_sum){
	        			s1=0;
	        			if (count(v.begin(), v.end(),i)>=1){
	        				break;
						}
						else{
							v.push_back(i);
							cnt+=1;
						}										
					}
	        		s1=0;
				}
					if (j==n-1)
	    				break;
				}
	    	cout<<cnt<<endl;
		}
		else
			cout<<"0"<<endl;	    
	}
	return 0;
}
