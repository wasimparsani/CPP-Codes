#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n;


int max1(vector<int> a)
{
	int m,i,j;
	vector<int> f;	
	int k=0,g=0;
	for(i=1;i<=n;i++)
	{	g++;
		for(j=k;j<i;j++)
		{
			if(a[j]>=g)
				continue;
			else{
				f.push_back(g-1);
				k=i-1;
				g=1;
			}
		}
		
	}
	f.push_back(g);
	for(i=0;i<f.size();i++)
//	cout<<f[i]<<" ";
//	cout<<endl;
	m=*max_element(f.begin(),f.end());
	return m;
	
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
	int i,j,c1,c2;
	cin>>n;
	char a[n][n];
	vector<int> v1;
	vector<int> v2;
	for(i=0;i<n;i++)
	{
		c1=0;
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
			if(a[i][j] == 'C')
				c1++;
		}
		v1.push_back(n-c1);
	}
	for(i=0;i<n;i++)
	cout<<v1[i]<<" ";
	cout<<endl;

	
	cout<<endl;
	for(i=0;i<n;i++)
	{
		c2=0;
		for(j=0;j<n;j++)
		{
			if(a[j][i] == 'C')
				c2++;
		}
		v2.push_back(n-c2);
	}
	for(i=0;i<n;i++)
	cout<<v2[i]<<" ";

	cout<<max(max1(v1),max1(v2))<<"\n";
  return 0;
	
}
