#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,q,q1,i,a;
    cin>>n;
    vector<int>v;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>q1;
        if(binary_search(v.begin(),v.end(),q1))
        {
            cout<<"Yes "<<(lower_bound(v.begin(),v.end(),q1)-v.begin())+1<<endl;
        }
        else {
            cout<<"No "<<(lower_bound(v.begin(),v.end(),q1)-v.begin())+1<<endl;
        }
    }

    return 0;
}

