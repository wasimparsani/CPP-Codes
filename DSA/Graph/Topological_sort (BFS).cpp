#include<bits/stdc++.h>
using namespace std;

void create_edge(vector<int> adj[],int indegree[],int u,int v)
{
	adj[u].push_back(v);
	indegree[v]++;
}

void topologicalsort(vector<int> adj[],int indegree[],int v)
{
	queue<int> q;
	for(int i=0;i<v;i++)
	{
		if(indegree[i] == 0)
			q.push(i);
	}
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		cout<<u<<" ";
		for(int x:adj[u])
		{
			if(--indegree[x] == 0)
				q.push(x);
		}
	}
}

int main()
{
	int v=5;
	vector<int> adj[v];
	int indegree[v]={0};
	create_edge(adj,indegree,0,2);
	create_edge(adj,indegree,0,3);
	create_edge(adj,indegree,2,3);
	create_edge(adj,indegree,1,3);
	create_edge(adj,indegree,1,4);
	topologicalsort(adj,indegree,v);
	return 0;
}
