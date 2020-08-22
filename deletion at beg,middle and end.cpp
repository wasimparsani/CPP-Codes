#include<bits/stdc++.h>     			//This program is to delete node from beginning, middle and last 
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

void delfirst()
{
	if(first == NULL)
	{
		cout<<"*** Linked list is empty ***";
		return;
	}
	struct Node *ptr=first;
	first=first->next;
	delete ptr;
}

void dellast()
{
	if(first == NULL)
	{
		cout<<"*** Linked list is empty ***";
		return;
	}
	struct Node *ptr,*q;
	ptr=first;
	while(ptr->next != NULL)
	{
		q=ptr;
		ptr=ptr->next;
	}
	q->next=ptr->next;
	last=q;
	
	delete ptr;
}

void delmiddle(int pos)
{
	struct Node *ptr,*q;
	ptr=first;
	for(int i=1;i<pos;i++)
	{
		q=ptr;
		ptr=ptr->next;
	}
	q->next=ptr->next;
	delete ptr;
}

int main()
{
	int a[]={1,2,3,4,5,6};
	int n=sizeof(a)/sizeof(int);
	cout<<"The initial linked list is:";
	int ch,p;
	create(a,n);
	display();
	do{
	cout<<"\nEnter your choice:\n1.delete from beginning\n2.delete at middle\n3.delete at last\n\n Enter 0 to exit:\n";
	cin>>ch;
	switch(ch)
	{
		case 1: delfirst();
				display();
				break;
		case 2: cout<<"\nEnter the position to delete node in linked list\n";
				cin>>p;
				delmiddle(p);
				display();
				break;
		case 3: dellast();
				display();
				break;
		default: break;
	}
	}while(ch!=0);

	return 0;
}
