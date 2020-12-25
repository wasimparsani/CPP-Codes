#include<bits/stdc++.h>
using namespace std;
#define TEZ ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

bool issafe(string str,int l,int i,int r)
{
	if(l!=0 && str[l-1] == 'A' && str[i] == 'B')
		return false;
	if(r == (l+1) && str[i] == 'A' && str[l] == 'B')
		return false;
	return true;
}

void permut(string str,int l,int r)
{
	if(l == r)
		cout<<str<<"\n";
	else
	{
		for(int i=l;i<=r;i++)
		{
			if(issafe(str,l,i,r))
			{
				swap(str[l],str[i]);
				permut(str,l+1,r);
				swap(str[l],str[i]);
			}
		}
	}
}

int main()
{
	TEZ;
	string str="ABC";
	cout<<"The permutation of String "<<str<<" which do not contain AB is -"<<"\n";
	permut(str,0,str.size()-1);
	return 0;
}

