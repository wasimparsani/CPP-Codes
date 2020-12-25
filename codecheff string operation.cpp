#include<bits/stdc++.h>
using namespace std;
#define TEZ ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main()
{
	TEZ;
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.length();
		set<tuple<int,int,int>> st;
		
		for(int i=0;i<n;i++)
		{	int cnt=0,odd=0,even=0;
			for(int j=i;j<n;j++)
			{
				if(s[j] == '1')
					cnt++;
				else
				{
					if(cnt%2)
						odd++;
					else
						even++;	
				}
				int len=j-i+1;
				st.insert(make_tuple(len,odd,even));	
			}
			
		}
		cout<<st.size()<<"\n";
	}
	return 0;
}

