#include<bits/stdc++.h>
using namespace std;

class Bintree{
	public:
		int data;
		Bintree *lchild,*rchild;
		Bintree *root;
		Bintree() {root=NULL;}
		void create(int pre[],int n);
		void inorder(Bintree *t);
};

void Bintree::create(int pre[],int n)
{
	stack <int> s;
	Bintree *t,*p;
	int i=0;
	root=new Bintree;
	root->data=pre[i++];
	root->lchild=root->rchild=NULL;
	p=root;
	while(i<n)
	{
		if(pre[i]<p->data)
		{
			t=new Bintree;
			t->data=pre[i++];
			t->lchild=t->rchild=NULL;
			p->lchild=t;
			s.push(p->data);
			p=t;
		}
		else 
		{
			if(!s.empty())
				s.push(999);
			if(pre[i]>p->data && pre[i]<s.top())
			{
				t=new Bintree;
				t->data=pre[i++];
				t->lchild=t->rchild=NULL;
				p->rchild=t;
				p=t;					
			}
			else{
//				t=new Bintree;
//				t->data=s.top();
				p=s.top();
				s.pop();
			}
		}
		cout<<i<<" ";
	}
}

void Bintree::inorder(Bintree *t)
{
	if(t)
	{
		cout<<t->data<<" ";
		inorder(t->lchild);
		inorder(t->rchild);
	}
}

int main()
{
	int p[]={30,20,10,15,25,40,50,45};
	int size=sizeof(p)/sizeof(int);
	Bintree b;
	b.create(p,size);
	cout<<"Pree order tree in Inorder Form = ";
	b.inorder(b.root);
	return 0;
}
