#include<bits/stdc++.h>
using namespace std;
#define TEZ ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main()
{
	TEZ;
	int n,p,a,b;
    cin>>n>>p;
    list<set<int> > ls;
    for(int i=0;i<p;i++)
    {
    	cin>>a>>b;
    	set<int> s;
    	list<set<int> >::iterator it=ls.begin();
    	if(ls.size() == 0) {
    		s.insert(a);
    		s.insert(b);
    		ls.insert(it,s);
    	}
    	int j=0;
    	for (auto& lls : ls)
    	{
    		j++;
    		if(lls.find(a) != lls.end() || lls.find(b) != lls.end())
    		{
    			lls.insert(a);
    			lls.insert(b);
    			break;
			}
			else
				continue;
		}
		if(j == ls.size())
		{
			if(!s.empty())
				s.erase(s.begin(),s.end());
			
			s.insert(a);
			s.insert(b);
			ls.insert(it,s);
		}
    }
    for (auto& s : ls) {
    	for (int i : s) {
        cout << i <<" ";
    	}
    cout <<endl;
}
    
	return 0;
}

