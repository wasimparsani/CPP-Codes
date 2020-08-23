#include<bits/stdc++.h>                         //This program is to check whether linked list is sorted or not
using namespace std;

struct Node
{
	int data;
	struct Node *next;
}*first;

struct Node * create(int a[],int n)
{
	struct Node *ptr, *last;
	int i;
	first=new Node;
	first->data=a[0];
	first->next=NULL;
	last=first;
	for(i=1;i<n;i++)
	{
		ptr=new Node;
		ptr->data=a[i];
		ptr->next=NULL;
		last->next=ptr;
		last=ptr;
	}
}

struct Node * display()
{
	struct Node *ptr;
	ptr=first;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<endl;
}

void sorted()
{
	int max=-9999;
	struct Node *ptr;
	ptr=first;
	while(ptr!=NULL)
	{
		if(ptr->data>max)
		{
			max=ptr->data;
			ptr=ptr->next;
			continue;
		}
		else
		{
			break;
		}
	
	}
	if(ptr != NULL)
		cout<<"\nLinked List is Not Sorted";
	else
		cout<<"\nLinked List is Sorted";
}

int main()
{
	int a[]={10,23,32,55,82};
	int s=sizeof(a)/sizeof(int);
	create(a,s);
	display();
	sorted();
	return 0;
}
