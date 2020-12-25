#include<bits/stdc++.h>      //heap sort
using namespace std;

void insertheap(int a[],int n)
{
	int i=n,temp;
	temp=a[i];
	while(i>1 && temp>a[i/2])
	{
		a[i]=a[i/2];
		i/=2;
	}
	a[i]=temp;
}

void deleteheap(int a[],int n)
{
	int i,j,val,temp;
	i=1;j=2*i;
	val=a[1];
	a[1]=a[n-1];
	a[n-1]=val;
	while(j<n-2)
	{
		if(a[j+1]>a[j])
			j=j+1;
		if(a[i]<a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			i=j;
			j=2*j;
		}
	}
}

int main()
{
	int arr[]={0,10,20,30,25,5,40,35};
	int size=sizeof(arr)/sizeof(int);
	for(int i=2;i<size;i++)
	{
		insertheap(arr,i);
	}
	
	for(int i=size;i>1;i--)
		deleteheap(arr,i);
		
	for(int i=1;i<size;i++)
		cout<<arr[i]<<" ";
	return 0;
}
