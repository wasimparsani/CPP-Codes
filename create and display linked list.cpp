#include<bits/stdc++.h>                         //This program is to create,display and reverse display of Linked List
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

void reversedisplay(struct Node  *ptr)
{
	if(ptr!=NULL)
	{
		reversedisplay(ptr->next);
		cout<<ptr->data<<" ";
	}
}

int main()
{
	int a[]={10,23,32,55,32};
	int s=sizeof(a)/sizeof(int);
	create(a,s);
	display();
	reversedisplay(first);
}
