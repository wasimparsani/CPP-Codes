#include<bits/stdc++.h>
using namespace std;

void add_edge(list<pair<int,int> > adj[],int u,int v,int w)
{
	adj[u].push_back(make_pair(v,w));
	adj[v].push_back(make_pair(u,w));	
}

void graph_shortest(list<pair<int,int> > adj[],int src,int vi)
{
	set<pair<int,int> > setd;
	vector<int> dis(vi,INT_MAX);
	setd.insert(make_pair(0,src));
	dis[src]=0;
	while(!setd.empty())
	{
		pair<int,int> temp= *setd.begin();
		setd.erase(setd.begin());
		int u=temp.second;
		list<pair<int,int> >::iterator it;
		for(it=adj[u].begin();it!=adj[u].end();it++)
		{
			int v=(*it).first;
			int w=(*it).second;
			if(dis[v] > (dis[u]+w))
			{
				if(dis[v] != INT_MAX)
					setd.erase(setd.find(make_pair(dis[v],v)));
				dis[v]=dis[u]+w;
				setd.insert(make_pair(dis[v],v));
			}
		}
	}
	
	for(int i=0;i<vi;i++)
	{
		cout<<i<<" : "<<dis[i]<<"\n";
	}
}

int main()
{
	int v=9;
	list<pair<int,int> > adj[v];
	add_edge(adj,0, 1, 4); 
    add_edge(adj,0, 7, 8); 
    add_edge(adj,1, 2, 8); 
    add_edge(adj,1, 7, 11); 
    add_edge(adj,2, 3, 7); 
    add_edge(adj,2, 8, 2); 
    add_edge(adj,2, 5, 4); 
    add_edge(adj,3, 4, 9); 
    add_edge(adj,3, 5, 14); 
    add_edge(adj,4, 5, 10); 
    add_edge(adj,5, 6, 2); 
    add_edge(adj,6, 7, 1); 
    add_edge(adj,6, 8, 6); 
    add_edge(adj,7, 8, 7); 
 	graph_shortest(adj,0,v);
    return 0;
}
