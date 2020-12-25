#include<bits/stdc++.h>                         //This program is to detect a loop in linked list
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

void detectloop(struct Node *fast, struct Node *slow)
{
	while(1)
	{
		if(fast == NULL || fast->next == NULL)
		{
			cout<<"\nNO LOOP DETECTED";
			break;
		}
		fast=fast->next->next;
		slow=slow->next;
		if(fast == slow)
		{
			cout<<"\nLOOP DETECTED";
			break;
		}
	}
	
}

int main()
{
	int a[]={10,23,32,55,32};
	int s=sizeof(a)/sizeof(int);
	create(a,s);
	display();
	struct Node *t1,*t2;
	t1=t2=first;
	t1=t1->next->next;
	while( t2->next != NULL)
		t2=t2->next;
	t2->next=t1;
	detectloop(first,first);
	return 0;
}
