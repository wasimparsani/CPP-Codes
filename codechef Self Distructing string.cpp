#include<bits/stdc++.h>
using namespace std;
#define TEZ ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
int t;

int main()
{
	TEZ;
	cin>>t;
	while(t--)
	{
		int z=0,one=0;
		string str;
		cin>>str;
		for(int i=0;i<str.length();i++)
		{
			if(str[i] == '0')
				z++;
			else
				one++;
		}
		if(str.length()%2 != 0 || z == 0)
			cout<<"-1\n";
		else
			cout<<int(abs(z-one)/2)<<"\n";
	}
	return 0;
}

