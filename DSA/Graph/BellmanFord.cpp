//Time Complexity = O(VE)

#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> ipair;

void create_edge(vector<pair<int,ipair > > &edges,int u,int v,int w)
{
	edges.push_back({w,{u,v}});
}

void printedges(int dis[],int v)
{
	for(int i=0;i<v;i++)
	{
		cout<<"0 - "<<i<<" -  "<<dis[i]<<"\n";
	}
}

bool bellman_ford(vector<pair<int,ipair > > edges,int v,int dis[])
{
	vector<pair<int,ipair> > :: iterator it;
	for(int i=0;i<v-1;i++)
	{
		for(it=edges.begin();it!=edges.end();it++)
		{
			int w=(*it).first;
			int u=(*it).second.first;
			int v=(*it).second.second;
			if(dis[v]>(dis[u]+w)){
				dis[v]=dis[u]+w;
			}
		}
	}
	for(it=edges.begin();it!=edges.end();it++)
	{
		int w=(*it).first;
		int u=(*it).second.first;
		int v=(*it).second.second;
		if(dis[v]>(dis[u]+w))
		{
			cout<<"Negative Weight Cycle Found";
			return false;
		}
	}
	return true;	
}

int main()
{
	vector<pair<int,ipair > > edges;
	int v=5;
	int dis[v];
	for(int i=0;i<v;i++)
		dis[i]=INT_MAX;
	dis[0]=0;
	create_edge(edges,0,1,-1);
	create_edge(edges,0,2,4);
	create_edge(edges,1,2,3);
	create_edge(edges,1,3,2);
	create_edge(edges,1,4,2);
	create_edge(edges,3,2,5);
	create_edge(edges,3,1,1);
	create_edge(edges,4,3,-3);
	if(bellman_ford(edges,v,dis))
		printedges(dis,v);
	return 0;
}

