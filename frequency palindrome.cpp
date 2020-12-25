#include<bits/stdc++.h>
using namespace std;
typedef long int ll;
ll q,s,e,mid,o;
int main(){
    string s1;
    cin>>s1;
    cin>>q;
    while(q--)
    {
    	mid=0,o=0;
        cin>>s>>e;
        if((s+e)%2 == 0)
        {
            mid=(s+e)/2;
            map<char,int> m;
            ll cnt=0;
        	for(int i=s;i<=e;i++)
            {
                if(i<mid)
                {
                    if(m.find(s1[i]) == m.end())
                    	m.insert(make_pair(s1[i],1));
                    else
                    {
                    	m[s1[i]]++;
					}
                        
                }
                else if(i>mid)
                {
                    if(m.find(s1[i]) == m.end())
                    {
                        cout<<"No"<<"\n";
                        o=1;
                        break;
                    }
                    else
                    {
                        m[s1[i]]--;
                    }
                }       
            }
            map<char,int>::iterator it;
            for(it=m.begin();it!=m.end();it++)
            {
            	cnt++;
                if(it->second != 0)
                    break;
            }
            if(cnt == m.size() && o == 0)
                cout<<"Yes"<<"\n";
        }
        else
        {
        	mid=(s+e)/2;
            map<char,int> m;
            ll cnt=0;
        	for(int i=s;i<=e;i++)
            {
                if(i<=mid)
                {
                    if(m.find(s1[i]) == m.end())
                    	m.insert(make_pair(s1[i],1));
                    else
                    	m[s1[i]]++;
                        
                }
                else if(i>mid)
                {
                    if(m.find(s1[i]) == m.end())
                    {
                        cout<<"No"<<"\n";
                        o=1;
                        break;
                    }
                    else
                    {
                        m[s1[i]]--;
                    }
                }
            }
            map<char,int>::iterator it;
            for(it=m.begin();it!=m.end();it++)
            {
            	cnt++;
                if(it->second != 0)
                    break;
            }
            if(cnt == m.size() && o == 0)
                cout<<"Yes"<<"\n";
        }
    }
    return 0;
}
