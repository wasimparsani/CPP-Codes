#include<iostream>
using namespace std;
int main()
{
	int n=10,r;
	int sum=0;
	while(n!=0)
	{
		r=n%10;
		sum+=r;
		n/=10;
	}
	cout<<sum;
	return 0;
}
