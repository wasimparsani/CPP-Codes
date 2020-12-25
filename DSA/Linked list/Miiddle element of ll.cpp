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

int getMiddle()
{
   // Your code here
   struct Node *f,*sec;
   f=first;
   sec=first;
   
   while(f != NULL && f->next != NULL)
   {
   	
       f=f->next->next;
       sec=sec->next;
   }
   return sec->data;
}

int main()
{
	int a[]={10,23,32,55,82,55};
	int s=sizeof(a)/sizeof(int);
	create(a,s);
	display();
	cout<<"\nThe Middle element of linked list is = "<<getMiddle();
	
	return 0;
}
