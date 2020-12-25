#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		Node *lchild;
		int data;
		Node *rchild;
};

class Tree{
	public:
		Node * root;
		Tree(){root=NULL;}
		void createtree();
		void inorder(Node *p);
		void preorder(Node *p);
		void postorder(Node *p);
		void levelorder(Node *p);
		int height(Node *root);
		int countnodes(Node *p);
		int leaf(Node *p);
		int get_max(Node *p);
		int get_min(Node *p);
};

class Queue
{
	private:
	int size, front, rear;
	Node **q;
	public:
		Queue(){front=rear=-1; size=10; q=new Node*[size];}
		Queue(int size){front=rear=-1; this->size=size; q=new Node*[this->size];}
		void enque(Node * x);
		Node * deque();
		int isempty(){return front == rear;}
		void display();
};

void Queue::enque(Node * x)
{
	if(rear == size-1)
		cout<<"\nQueue is full\n";
	else
	{
		rear++;
		q[rear]=x;
	}
}

Node * Queue::deque()
{
	Node* x=NULL;
	if(front == rear)
		cout<<"\nQueue is empty\n";
	else
	{
		front++;
		x=q[front];
	}
	return x;
		
}

void Tree::createtree()
{
	Node *t,*p;
	Queue q(20);
	int x;
	root=new Node;
	cout<<"Enter The root Node= ";
	cin>>x;
	root->data=x;
	root->lchild=root->rchild=NULL;
	q.enque(root);
	
	while(!q.isempty())
	{
		p=q.deque();
		cout<<"\nEnter the left child of "<<p->data<<"=";
		cin>>x;
		if(x!=-1)
		{
			t=new Node;
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->lchild=t;
			q.enque(t);
		}
		cout<<"\nEnter the right child of "<<p->data<<"=";
		cin>>x;
		if(x!=-1)
		{
			t=new Node;
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->rchild=t;
			q.enque(t);
		}
	}
}

void Tree::preorder(Node *p)
{
	if(p)
	{
		cout<<p->data<<" ";
		preorder(p->lchild);
		preorder(p->rchild);
	}
}

void Tree::inorder(Node *p)
{
	if(p)
	{
		inorder(p->lchild);
		cout<<p->data<<" ";
		inorder(p->rchild);
	}
}

void Tree::postorder(Node *p)
{
	if(p)
	{
		postorder(p->lchild);
		postorder(p->rchild);
		cout<<p->data<<" ";
	}
}

int Tree::height(Node *root)
{
	int l=0,r=0;
	if(root == NULL)
		return 0;
	else
	{
		l=height(root->lchild);
		r=height(root->rchild);
		if(l>r)
			return l+1;
		else
			return r+1;
	}
}

int Tree::countnodes(Node *p)
{
	if(p!=NULL)
		return countnodes(p->lchild)+countnodes(p->rchild)+1;
	return 0;
}

int Tree::get_max(Node *p)
{
	if(p == NULL)
		return INT_MIN;
	else
		return max(p->data,max(get_max(p->lchild),get_max(p->rchild)));
}

int Tree::get_min(Node *p)
{
	if(p == NULL)
		return INT_MAX;
	else
		return min(p->data,min(get_min(p->lchild),get_min(p->rchild)));
}

int Tree::leaf(Node *p)
{
	if(p == NULL)
		return 0;
	if(!p->lchild && !p->rchild)
		return leaf(p->lchild)+leaf(p->rchild)+1;
	else
		return leaf(p->lchild)+leaf(p->rchild);
	return 0;
	}

void Tree::levelorder(Node *p)
{
	Queue q(25);
	cout<<p->data<<" ";
	q.enque(p);
	while(!q.isempty())
	{
		p=q.deque();
		if(p->lchild)
		{
			cout<<p->lchild->data<<" ";
			q.enque(p->lchild);
		}
		if(p->rchild)
		{
			cout<<p->rchild->data<<" ";
			q.enque(p->rchild);
		}
	}
}


int main()
{
	Tree t;
	t.createtree();
	cout<<"\n\nHeight of tree = ";
	cout<<t.height(t.root);
	cout<<"\nNo. of nodes in a tree = ";
	cout<<t.countnodes(t.root);
	cout<<"\nreOrder = ";
	t.preorder(t.root);
	cout<<"\nInOrder = ";
	t.inorder(t.root);
	cout<<"\nPostOrder = ";
	t.postorder(t.root);
	cout<<"\nLevel order = ";
	t.levelorder(t.root);
	cout<<"\nLeaf nodes are = ";
	cout<<t.leaf(t.root);
	cout<<"\nThe Maximum element in a tree is = ";
	cout<<t.get_max(t.root);
	cout<<"\nThe Minimum element in a tree is = ";
	cout<<t.get_min(t.root);
	return 0;
}
