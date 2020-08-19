#include<iostream>
using namespace std;
int main()
{
	int a[50],c=1,i=0,n;
	while( c!= '\n')
	{
	scanf("%d%c",&n,&c);
	a[i++]=n;
	}
	n=i;
	for(i=0;i<n;i++){
		cout << a[i] << "\t";
	}
	return 0;
}
