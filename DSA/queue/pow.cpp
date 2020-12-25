#include<bits/stdc++.h>
using namespace std;
int main() {

	// Write your code here
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
     	int n,count=1;
        cin>>n;
        for(int i=2;i<=n/2;i++)
        {
            if(pow(i,2) < n)
                count++;
            if(pow(i,3) < n)
                count++;
            
        }
        
        cout<<count<<"\n";
    }
    return 0;
}
