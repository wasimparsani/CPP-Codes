#include<bits/stdc++.h> //This code is to check whether a number is prime or not
using namespace std;
vector <int> v;

int check()    //function returning value
{
	int i,cnt=0,sum=v[0];
	vector<int> :: iterator it;
	for(i=1;i<v.size();i++)
	{
		sum+=v[i];
		it=find(v.begin(),v.end(),sum);
		if(it!=v.end())
			cnt+=1;
	}
	cout<<cnt<<endl;
}


bool prime(int n)
{
	if (n<2)
		return false;
	for(int i=2;i<n;i++)
	{
		if(n%i==0 )
			return false;
	}
	return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,i;
	cin>>n;
	
	for (i=2;i<=n;i++)
		if(prime(i) == true)
			v.push_back(i);
	check();

	return 0;	
			
}
