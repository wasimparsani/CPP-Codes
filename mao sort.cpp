#include<bits/stdc++.h>
using namespace std;
int t,a1,b1,c1,a2,b2,c2;
int main()
{
	cin>>t;
	while(t--)
	{
		ios_base::sync_with_stdio(false);
		cin.tie(0);
		cout.tie(0);
		int max=0;
		map<int,int> m;
		cin>>a1>>b1>>c1;
		cin>>a2>>b2>>c2;
		m[a1]=a2;m[b1]=b2;m[c1]=c2;
		
		if(a1>b1 && b1>c1) max=a1;
		else if(b1>a1 && b1>c1) max=b1;
		else max=c1;
			
		if(m.size() == 3 && max == a1)
		{
			if((b1>c1 && b2>c2) || (c1>b1 && c2>b2))
				cout<<"FAIR"<<"\n";
			else
				cout<<"NOT FAIR"<<"\n";
		}
		else if(m.size() == 3 && max == b1)
		{
			if((a1>c1 && a2>c2) || (c1>a1 && c2>a2))
				cout<<"FAIR"<<"\n";
			else
				cout<<"NOT FAIR"<<"\n";
		}
		else if(m.size() == 3 && max == c1)
		{
			if((a1>b1 && a2>b2) || (b1>a1 && b2>a2))
				cout<<"FAIR"<<"\n";
			else
				cout<<"NOT FAIR"<<"\n";
		}
		else if(m.size() == 2)
		{
			if((a1 == b1 && b1 != c1 && a2 == b2 && b2 != c2 && (b1 > c1 && b2 > c2) || (c1 > b1 && c2 > b2)) || (a1 == c1 && c1 != b1 && a2 == c2 && c2 != b2 && (b1 > c1 && b2 > c2) || (c1 > b1 && c2 > b2)) || (c1 == b1 && b1 != a1 && c2 == b2 && b2 != a2 && (b1 > a1 && b2 > a2) || (a1 > b1 && a2 > b2)))
				cout<<"FAIR"<<"\n";
			else
				cout<<"NOT FAIR"<<"\n";
		}
		else if(m.size() == 1)
		{
			if(a1==b1 && b1==c1 && a1==c1 && a2==c2 && a2==b2 && b2==c2)
				cout<<"FAIR"<<"\n";
			else
				cout<<"NOT FAIR"<<"\n";
		}
		else
			cout<<"NOT FAIR"<<"\n";
	}
	return 0;
}
