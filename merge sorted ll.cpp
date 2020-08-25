#include<bits/stdc++.h>                         //This program is to merge the two sorted linked list
using namespace std;

struct Node
{
	int data;
	struct Node *next;
}*first,*sec, *third;

struct Node * createfirst(int a[],int n)
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
struct Node * createsec(int a[],int n)
{
	struct Node *ptr, *last;
	int i;
	sec=new Node;
	sec->data=a[0];
	sec->next=NULL;
	last=sec;
	for(i=1;i<n;i++)
	{
		ptr=new Node;
		ptr->data=a[i];
		ptr->next=NULL;
		last->next=ptr;
		last=ptr;
	}
}

struct Node * display(struct Node *ptr)
{
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<endl;
}

void mergelinkedlist()
{
	struct Node *last;
	if(first->data < sec->data)
	{
		third=last=first;
		first=first->next;
		last->next=NULL;	
	}
	else
	{
		third=last=sec;
		sec=sec->next;
		last->next=NULL;
	}
	while(first != NULL && sec != NULL)
	{
		if(first->data < sec->data)
		{
			last->next=first;
			last=first;
			first=first->next;
			last->next=NULL;
		}
		else
		{
			last->next=sec;
			last=sec;
			sec=sec->next;
			last->next=NULL;
		}
		if(first != NULL)
			last->next=first;
		else
			last->next=sec;
	}
	
}

int main()
{
	int a[]={10,23,32,55,82};
	int b[]={5,7,13,53,78,90};
	int s1=sizeof(a)/sizeof(int);
	int s2=sizeof(b)/sizeof(int);
	createfirst(a,s1);
	createsec(b,s2);
	cout<<"The First Sorted Linked List=\n";
	display(first);
	cout<<"\nThe Second Sorted Linked List=\n";
	display(sec);
	mergelinkedlist();
	cout<<"\nThe Merge linked list is=\n";
	display(third);
	return 0;
}
