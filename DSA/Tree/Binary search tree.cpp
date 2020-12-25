#include<bits/stdc++.h>
using namespace std;

class Bintree{
	public:
		Bintree *lchild;
		int data;
		Bintree *rchild;
		Bintree *root;
		Bintree(){root=NULL;}
		Bintree * search(Bintree *t,int key);
		void insert(int key);
		Bintree * rinsert(Bintree *t,int key);
		void inorder(Bintree *t);
		Bintree * inpre(Bintree *p);
		Bintree * insuc(Bintree *p);
		int height(Bintree *p);
		Bintree * Delete(Bintree *p,int key);
};

void Bintree::insert(int key) //inserting element in iteratively
{
	Bintree *p,*r,*t=root;
	if(t == NULL)
	{
		p=new Bintree();
		p->data=key;
		p->lchild=p->rchild=NULL;
		root=p;
		return;
	}
	while(t!=NULL)
	{
		r=t;
		if(key<t->data)
			t=t->lchild;
		else if(key > t->data)
			t=t->rchild;
		else
			return;	
	}
	p=new Bintree();
	p->data=key;
	p->lchild=p->rchild=NULL;
	if(key<r->data)
		r->lchild=p;
	else
		r->rchild=p;
	
}

Bintree * Bintree::rinsert(Bintree *t,int key)  //inserting element in recursively
{
	Bintree *p;
	if(t == NULL)
	{
		p=new Bintree();
		p->data=key;
		p->lchild=p->rchild=NULL;
		return p;
	}
	if(key < t->data)
		t->lchild=rinsert(t->lchild,key);
	else if(key > t->data)
		t->rchild=rinsert(t->rchild,key);
	else
		return t;
}

Bintree * Bintree::search(Bintree *t,int key)    //searching element in Binary tree
{
	if(t == NULL)
		return NULL;
	if(key == t->data)
		return t;
	else if(key<t->data)
		return search(t->lchild,key);
	else
		return search(t->rchild,key);
}

int Bintree::height(Bintree *p)
{
	int x,y;
	if(p == NULL)
		return 0;
	x=height(p->lchild);
	y=height(p->rchild);
	return x>y?x:y;
}

Bintree * Bintree::inpre(Bintree *p)
{
	while(p && p->rchild != NULL)
		p=p->rchild;
	return p;
}

Bintree * Bintree::insuc(Bintree *p)
{
	while(p && p->lchild != NULL)
		p=p->lchild;
	return p;
}

Bintree * Bintree :: Delete(Bintree *p,int key)
{
	Bintree *q;
	if(p == NULL)
		return NULL;
	if(p->lchild == NULL && p->rchild == NULL)
	{
		if(p == root)
			root=NULL;
		free(p);
		return NULL;
	}
	
	if(key < p->data)
		p->lchild=Delete(p->lchild,key);
	else if(key > p->data)
		p->rchild=Delete(p->rchild,key);
	else
	{
		if(height(p->lchild) < height(p->rchild))
		{
			q=inpre(p->rchild);
			p->data=q->data;
			p->rchild=Delete(p->rchild,q->data);
		}
		else
		{
			q=insuc(p->lchild);
			p->data=q->data;
			p->lchild=Delete(p->lchild,q->data);
		}
	}
	return p;
}

void Bintree :: inorder(Bintree *t)		//Traversal of tree in Inorder and hence traversing in 
{										//inorder form will print element in sorted array
	if(t)
	{
		inorder(t->lchild);
		cout<<t->data<<" ";
		inorder(t->rchild);
	}
}

int main()
{
	Bintree *temp;
	Bintree t;
	int n;
	char ch='y';
	while(true){
		cout<<"\nEnter the element to Insert in Binary Search Tree\n\t -- press 0 to stop inserting\n";
		cin>>n;
		if(n == 0)
			break;
		t.insert(n);
		t.inorder(t.root);
		
	}
	t.rinsert(t.root,8);
	t.inorder(t.root);
	cout<<"\nEnter the element you want to search ";
	cin>>n;
	temp=t.search(t.root,n);
	if(temp!=NULL)
		cout<<"Element "<<n<<" is found";
	else
		cout<<"Element "<<n<<" is Not found";
	while(true){
		cout<<"\nEnter the element to Delete from Binary Search Tree\n\t -- press 0 to stop Deleting\n";
		cin>>n;
		if(n == 0)
			break;
		t.Delete(t.root,n);
		t.inorder(t.root);
		
	}
	return 0;
}
