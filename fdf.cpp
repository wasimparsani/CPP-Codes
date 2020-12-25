#include <iostream>
using namespace std;
int t,n,k,i;

void days(int arr[],int n,int k){
    int x;
    x=arr[0];
    int i=0;
    while(x>=k){
        i+=1;
        x-=k;
        if (i>n-1){
            x+=0;
        }
        else{
            x+=arr[i];
        }
    }
    cout<<i+1;
}

int main() {
    cin>>t;
    while(t>0){
        t=t-1;
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++){
           cin>>a[i]; 
        }
        days(a,n,k);
    }
	return 0;
}
