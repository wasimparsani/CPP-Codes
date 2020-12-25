#include<bits/stdc++.h>     			//This program is to insert node in beginning, middle and last 
using namespace std;

struct Node {
	int data;
	struct Node *next;
}*first;

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

void insbig(int x)
{
	struct Node *ptr;
	ptr=new Node;
	ptr->data=x;
	ptr->next=first;
	first=ptr;

}

void inslast(int x)
{
	struct Node *ptr,*t;
	ptr=first;
	while(ptr->next != NULL) 
		ptr=ptr->next;
	t=new Node;
	t->data=x;
	t->next=ptr->next;
	ptr->next=t;
}

void insmiddle(int x, int pos)
{
	struct Node *ptr,*t;
	ptr=first;
	t=new Node;
	t->data=x;
	for(int i=1;i<pos-1;i++)
		ptr=ptr->next;
	t->next=ptr->next;
	ptr->next=t;

}

int main()
{
	int a[]={1,2,3,4,5};
	int d,p,choice;
	int size=sizeof(a)/sizeof(int);
	create(a,size);
	cout<<"The initial linked list is = ";
	display();
	do{
	cout<<"\n\nEnetr your Choice=\n1.Insert at Beg.\n2.Insert at last\n3.Inset at middle\n\nEnter 0 to exit=\n";
	cin>>choice;
	switch(choice)
	{
		case 1:cout<<"\nEnter the element to insert in beginning = ";
				cin>>d;
				insbig(d);
				display();
				break;
		case 2:cout<<"\nEnter the element to insert at last = ";
				cin>>d;
				inslast(d);
				display();
				break;
		case 3:cout<<"\nEnter the element and position to insert at middle = ";
				cin>>d>>p;
				insmiddle(d,p);
				display();
				break;
		default:
				break;
	}
	}while(choice != 0);
	
	
		
	
	return 0;
}
