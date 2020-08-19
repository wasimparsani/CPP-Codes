#include <bits/stdc++.h>
using namespace std;
long int t,i,p,n,p1,p2;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>t;
	while(t--)
	{
		string a;
		string b;
		cin>>a;
		cin>>b;
		for(i=1;i<b.length();i++) {
			p=a.find(b[i]);
			a.erase(a.begin()+p);
		}
		sort(a.begin(),a.end());
		string f=a,s=a;
		p1=f.find(b[0]);
		f.erase(f.begin()+p1);
		f.insert(p1,b);
		p2=s.rfind(b[0]);
		s.erase(s.begin()+p2);
		s.insert(p2,b);
	
		
		cout<<min(f,s)<<"\n";
		
	}
	return 0;
}
