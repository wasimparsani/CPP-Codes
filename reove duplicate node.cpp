#include<bits/stdc++.h>     			//This program is to remove duplicate node from sorted linked list 
using namespace std;

struct Node {
	int data;
	struct Node *next;
}*first,*last;

void create(int a[],int size)
{
	struct Node *ptr,*last;
	first=new Node;
	first->data=a[0];
	first->next=NULL;
	last=first;
	for(int i=1;i<size;i++)
	{
		ptr=new Node;
		ptr->data=a[i];
		ptr->next=NULL;
		last->next=ptr;
		last=ptr;
	}
}

void display()
{
	struct Node *ptr;
	ptr=first;
	cout<<endl;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
}

void isdup()
{
	struct Node *ptr,*d;
	ptr=first;
	d=first->next;
	while(d!=NULL)
	{
		if(ptr->data != d->data)
		{
			ptr=d;
			d=d->next;
		}
		else
		{
			ptr->next=d->next;
			delete d;
			d=ptr->next;
		}
	}
}

int main()
{
	int a[]={3,3,4,4,4,4,5,8,8,8};
	int n=sizeof(a)/sizeof(int);
	create(a,n);
	cout<<"Initial Linked List=\n";
	display();
	isdup();
	cout<<"\nLinked List with No Duplication=\n";
	display();
	return 0;
}
