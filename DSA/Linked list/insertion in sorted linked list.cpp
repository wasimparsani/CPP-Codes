#include<bits/stdc++.h>     			//This program is to insert node in sorted linked list
using namespace std;

struct Node {
	int data;
	struct Node *next;
}*first,*last;

void create(int a[],int size)
{
	struct Node *ptr;
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
//	cout<<endl;
//	cout<<first->data<<"\n";
//	cout<<last->data;
}

void inssort(int x)
{
	struct Node *ptr,*t;
	ptr=first;
	t=new Node;
	t->data=x;
	if(x < first->data)
	{
		t->next=first;
		first=t;
	}
	else if(x > last->data)
	{
		t->next=last->next;
		last->next=t;
		last=t;
	}
	else {
	while((ptr->next)->data < x)
		ptr=ptr->next;
	t->next=ptr->next;
	ptr->next=t;
	}
}

int main()
{
	int a[]={10,12,15,17,25};
	int n=sizeof(a)/sizeof(int);
	int v;
	create(a,n);
	cout<<"The Initial sorted linked list is\n";
	display();
	cout<<"\nEnter the element to insert in sorted linked list=\n";
	cin>>v;
	inssort(v);
	display();
	return 0;
	
}
