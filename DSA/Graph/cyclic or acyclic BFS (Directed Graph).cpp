#include<bits/stdc++.h>
using namespace std;

void create_edge(vector<int> adj[],int a,int b)
{
	adj[a].push_back(b);
}

bool is_cyclic(vector<int> adj[],int v)
{
	vector<int> in_degree(v,0);
	queue<int> q;
	int cnt=0;
	for(int i=0;i<v;i++)
	{
		for(int v:adj[i])
			in_degree[v]++;
	}
	for(int i=0;i<v;i++)
	{
		if(in_degree[i] == 0)
			q.push(i);
	}
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		for(int s:adj[u])
		{
			if(--in_degree[s] == 0)
				q.push(s);
		}
		cnt++;
	}
	return (cnt!=v?true:false);
	
}

int main()
{
	int v=5;
	vector<int> adj[v+1];
	create_edge(adj,0,1);
	create_edge(adj,2,1);
	create_edge(adj,2,3);
	create_edge(adj,3,4);
	create_edge(adj,4,2);
	if(is_cyclic(adj,v))
		cout<<"graph has cycle";
	else
		cout<<"No cycle";
	return 0;
}
