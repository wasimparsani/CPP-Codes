#include<bits/stdc++.h>
using namespace std;

void create_edge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
}

void DFS_REC(vector<int> adj[],stack<int> &st,int s,bool vis[])
{
	vis[s]=true;
	for(int v:adj[s])
	{
		if(vis[v] == false)
			DFS_REC(adj,st,v,vis);
	}
	st.push(s);
}

void topologicalsort(vector<int> adj[],int v)
{
	stack<int> st;
	bool vis[v]={false};
	for(int i=0;i<v;i++)
	{
		if(vis[i] == false)
			DFS_REC(adj,st,i,vis);		
	}	
	
	while(!st.empty())
	{
		cout<<st.top()<<" ";
		st.pop();
	}
}

int main()
{
	int v=5;
	vector<int> adj[v];
	int indegree[v]={0};
	create_edge(adj,0,1);
	create_edge(adj,1,3);
	create_edge(adj,2,3);
	create_edge(adj,2,4);
	create_edge(adj,3,4);
	topologicalsort(adj,v);
	return 0;
}
