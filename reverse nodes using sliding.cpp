#include<bits/stdc++.h>                         //This program is to reverse a linked list using sliding pointer
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

void reverselink()
{
	struct Node *ptr,*q,*r;
	ptr=first;
	q=r=NULL;
	while(ptr!=NULL)
	{
		r=q;
		q=ptr;
		ptr=ptr->next;
		q->next=r;
	}
	first=q;
}

int main()
{
	int a[]={10,23,32,55,82};
	int s=sizeof(a)/sizeof(int);
	create(a,s);
	cout<<"Before Reverse= \n";
	display();
	cout<<"\nAfter reverse=\n";
	reverselink();
	display();
	return 0;
}
