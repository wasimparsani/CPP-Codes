#include <bits/stdc++.h>
using namespace std;

string findMaximumNum(string str, int k);

void findmax(int s[],int n,int k,int j,int l)
{
	if(j == k || l == n)
		return;
	int max=INT_MIN,temp=0,pos=0;
	for(int i=l;i<n;i++)
	{
		if(max<s[i])
		{
			max=s[i];
			pos=i;
		}
	}
	if(pos == l)
		findmax(s,n,k,j,l+1);
	else
	{
		temp=s[pos];
		s[pos]=s[j];
		s[j]=temp;
		findmax(s,n,k,j+1,l+1);
	}
	
}

int main()
{
    int t, k;
    string str;

    
    cin >> k >> str;
	cout<<findMaximumNum(str, k)<<endl;
    
    return 0;
}



string findMaximumNum(string str, int k)
{
   int s1[str.size()];
   for(int i=0;i<str.size();i++)
   {
   		s1[i]=(int)str[i]-48;
   }
   
   findmax(s1,str.size(),k,0,0);
   for(int i=0;i<str.size();i++)
   {
   		str[i]=(char)s1[i]+48;
   }
   return str;
}

