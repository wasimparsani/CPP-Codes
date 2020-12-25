// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string findMaximumNum(string str, int k);

int main()
{
    int t, k;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> k >> str;
        cout<< findMaximumNum(str, k) << endl;
    }
    return 0;
}
// } Driver Code Ends

void findmax(string str,int k,string &max1)
{
    if(k == 0)
        return;
    int n=str.length();
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(str[i]<str[j])
            {
                swap(str[i],str[j]);
                if(str.compare(max1)>0)
                    max1=str;
                findmax(str,k-1,max1);
                swap(str[i],str[j]);
            }
        }
    }
}

string findMaximumNum(string str, int k)
{
    string max=str;
    findmax(str,k,max);
    return max;
}
