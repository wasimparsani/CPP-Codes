#include<bits/stdc++.h>
using namespace std;

#define v 5

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

void MST_PRIM(int adj[v][v])
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
		for(int k=0;k<v;k++)
		{
			if(adj[u][k] && !MST_vis[k] && adj[u][k]<key[k])
			{
				parent[k]=u;
				key[k]=adj[u][k];
			}
		}
	}
	
	for(int i=1;i<v;i++)
		cout<<parent[i]<<"-"<<i<<" -> "<<key[i]<<"\n";
	
}

int main()
{
	int adj[v][v]={{0,2,0,6,0}, {2,0,3,8,5},{0,3,0,0,7},{6,8,0,0,9},{0,5,7,9,0}};
	MST_PRIM(adj);
	return 0;
}
