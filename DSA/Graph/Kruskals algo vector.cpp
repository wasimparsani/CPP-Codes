#include<bits/stdc++.h>       //kruskal's algorithm vector
using namespace std;

typedef pair<int, int> ipair;

void add_edge(vector< pair<int, ipair> > &edges,int u,int v,int w)
 {
 	edges.push_back({w, {u, v}});
 }

int find(int parent[],int i)
{
	while(parent[i]!=i)
		i=parent[i];
	return i;
}

void in_mst(int rnk[],int parent[],int u,int v)
{
	u=find(parent,u);
	v=find(parent,v);
	if(rnk[u] > rnk[v])
		parent[v]=u;
	else
		parent[u]=v;
		
	if(rnk[u] == rnk[v])
		rnk[v]++;
}

int kruskal(vector< pair<int, ipair> > &edges,int v)
{
	
	cout<<"Edges of MST are = \n";
	int parent[v],rank[v],mstwt=0,s;
	for(int i=0;i<v;i++) {parent[i]=i; rank[i]=0;}
	sort(edges.begin(),edges.end());
	for(int i=0,s=0;s<v-1;i++)
    { 
        int x = find(parent,edges[i].second.first); 
        int y = find(parent,edges[i].second.second);
        if(x != y)
        {
        	s++;
        	cout<<edges[i].second.first<<"-"<<edges[i].second.second<<"\n";
        	in_mst(rank,parent,x,y);
        	mstwt+=edges[i].first;
		} 
	}
	return mstwt;
}

int main()
{
	int v=5;
	vector< pair<int, ipair> > edges;
	add_edge(edges,0,2,8);
	add_edge(edges,0,1,10);
	add_edge(edges,1,3,3);
	add_edge(edges,1,2,5);
	add_edge(edges,2,3,4);
	add_edge(edges,2,4,12);
	add_edge(edges,3,4,15);
	cout<<"Weight of MST is = "<<kruskal(edges,v);
	return 0;
}
