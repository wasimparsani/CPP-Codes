#include<bits/stdc++.h>
using namespace std;

#define v 5

void add_edge(list<pair<int,int> > adj[],int u,int x,int w)
{
	adj[u].push_back(make_pair(x,w));
	adj[x].push_back(make_pair(u,w));	
}

int minkey(bool MST_vis[v],int key[v])
{
	int min=INT_MAX,pos;
	for(int i=0;i<v;i++)
	{
		if(!MST_vis[i] && key[i]<min)
		{
			min=key[i];
			pos=i;
		}
	}
	return pos;
}

void MST_PRIM(list<pair<int,int> > adj[v])
{
	int parent[v];
	int key[v];
	bool MST_vis[v]={false};
	for(int i=0;i<v;i++)
		key[i]=INT_MAX;
	key[0]=0;
	parent[0]=-1;
	for(int j=0;j<v-1;j++)
	{
		int u=minkey(MST_vis,key);
		MST_vis[u]=true;
		list<pair<int,int> >::iterator k;
		for(k=adj[u].begin();k!=adj[u].end();k++)
		{
			int x=(*k).first;
			int y=(*k).second;
			if(!MST_vis[x] && y < key[x])
			{
				parent[x]=u;
				key[x]=y;
			}
		}
	}
	
	for(int i=1;i<v;i++)
		cout<<parent[i]<<"-"<<i<<" -> "<<key[i]<<"\n";
	
}

int main()
{
	list<pair<int,int> > adj[v];
	add_edge(adj,0, 1, 2); 
    add_edge(adj,0, 3, 6);  
    add_edge(adj,1, 2, 3); 
    add_edge(adj,1, 4, 5); 
    add_edge(adj,2, 4, 7); 
    add_edge(adj,3, 4, 9); 
    add_edge(adj,3, 1, 8);
	MST_PRIM(adj);
	return 0;
}
