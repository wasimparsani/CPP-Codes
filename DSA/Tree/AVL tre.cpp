#include<bits/stdc++.h>
using namespace std;

class avltree{
	public:
		avltree *lchild;
		int data;
		int height;
		avltree *rchild;
}*root=NULL;
int balfactor(avltree *p)
{
	int hl,hr;
	hl= p && p->lchild?p->lchild->height:0;
	hr= p && p->rchild?p->rchild->height:0;
	
	return hl-hr;
}

int nodeheight(avltree *p)
{
	int hl,hr;
	hl= p && p->lchild?p->lchild->height:0;
	hr= p && p->rchild?p->rchild->height:0;
	
	return hl>hr?hl+1:hr+1;
}



avltree * LLrotation(avltree *p)
{
	avltree *pl=p->lchild;
	avltree *plr=pl->rchild;
	
	pl->rchild=p;
	p->lchild=plr;
	
	p->height=nodeheight(p);
	pl->height=nodeheight(pl);
	
	if(root == p)
		root=pl;
		
	return pl;
}

avltree * LRrotation(avltree *p)
{
	avltree *pl=p->lchild;
	avltree *plr=pl->rchild;
	
	p->lchild=plr->rchild;
	pl->rchild=plr->lchild;
	
	plr->rchild=p;
	plr->lchild=pl;
	
	plr->height=nodeheight(plr);
	p->height=nodeheight(p);
	pl->height=nodeheight(pl);
	
	if(root == p)
		root=plr;
		
	return plr;
}

avltree * RRrotation(avltree *p)
{
	avltree *pl=p->rchild;
	avltree *plr=pl->lchild;
	
	pl->lchild=p;
	p->rchild=plr;
	
	p->height=nodeheight(p);
	pl->height=nodeheight(pl);
	
	if(root == p)
		root=pl;
		
	return pl;

}

avltree * RLrotation(avltree *p)
{
	avltree *pl=p->rchild;
	avltree *plr=pl->lchild;
	
	p->rchild=plr->lchild;
	pl->lchild=plr->rchild;
	
	plr->lchild=p;
	plr->rchild=pl;
	
	plr->height=nodeheight(plr);
	p->height=nodeheight(p);
	pl->height=nodeheight(pl);
	
	if(root == p)
		root=plr;
		
	return plr;

}

avltree * Ravltree(avltree *p,int key)
{
//	cout<<key<<" ";
	avltree *t;
	if(p==NULL)
	{
		t=new avltree;
		t->data=key;
		t->lchild=t->rchild=NULL;
		t->height=1;
		return t;
	}
	
	if(key<p->data)
		p->lchild=Ravltree(p->lchild,key);
	else if(key>p->data)
		p->rchild=Ravltree(p->rchild,key);
		
	p->height=nodeheight(p);
	
	if(balfactor(p) == 2 && balfactor(p->lchild) == 1)
		return LLrotation(p);
	else if(balfactor(p) == 2 && balfactor(p->lchild) == -1)
		return LRrotation(p);
	else if(balfactor(p) == -2 && balfactor(p->lchild) == -1)
		return RRrotation(p);
	else if(balfactor(p) == -2 && balfactor(p->lchild) == 1)
		return RLrotation(p);
	
	return p;
}

int main()
{
	root=Ravltree(root,10);
	Ravltree(root,5);
	Ravltree(root,7);
	cout<<root->data;
}
