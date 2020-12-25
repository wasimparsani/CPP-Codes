#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t,q,val;
    cin>>t;
    set<int> s;
    while(t--)
    {
        cin>>q>>val;
        if(q==1)
            s.insert(val);
        else if(q==2)
        {
            if(s.find(val) != s.end())  
            s.erase(val);  
        }
        else {
            if(s.find(val) != s.end())
                cout<<"Yes"<<"\n";
            else
                cout<<"No"<<"\n";
        }
    }  
    return 0;
}




