#include<bits/stdc++.h>             //This program is to create,count and sum of all the nodes in linked list
using namespace std;
int ct=0;
struct Node{
	int data;
	struct Node *next;
}*first;

struct Node * create()
{
	struct Node *ptr,*last;
	int n,data;
	cout<<"Enter the total no of values you want to insert in linked list\n";
	cin>>n;
	cout<<"Enter the data\n";
	cin>>data;
	first=new Node;
	first->data=data;
	first->next=NULL;
	last=first;
	for(int i=1;i<n;i++)
	{
		cin>>data;
		ptr=new Node;
		ptr->data=data;
		ptr->next=NULL;
		last->next=ptr;
		last=ptr;
		
	}
}

void display(struct Node *ptr)
{
	if(ptr!=NULL)
	{
		ct++;
		cout<<ptr->data<<" ";
		display(ptr->next);
	}
	
}

int sum(struct Node *ptr)
{
	if(ptr==NULL)
		return 0;
	else
		return ptr->data + sum(ptr->next);
	
}

int main()
{
	create();
	display(first);
	cout<<"\nTotal no of nodes is = "<<ct;
	cout<<"\nTotal sum of linked list is = "<<sum(first);
	return 0;
}
