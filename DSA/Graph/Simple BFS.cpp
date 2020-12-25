#include<bits/stdc++.h>     //adjancy list for undirected graph
using namespace std;

void createedge(vector<int> adj[],int a,int b)
{
	adj[a].push_back(b);
	adj[b].push_back(a);
}

void BFS(vector<int> adj[],int v,int s)
{
	queue<int> q;
	bool vis[v+1];
	memset(vis,false,sizeof(vis));
	vis[s]=true;
	q.push(s);
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		cout<<u<<" ";
		for(int v:adj[u])
		{
			if(vis[v]==false)
			{
				vis[v]=true;
				q.push(v);
			}
		}
	}
}

int main()
{
	int v=5,a,b=1;
	vector<int> adj[v];
	createedge(adj,0,1);
	createedge(adj,0,2);
	createedge(adj,1,2);
	createedge(adj,1,3);
	createedge(adj,2,3);
	createedge(adj,2,4);
	createedge(adj,3,4);
	
	cout<<endl;
	BFS(adj,v,0);
	return 0;
}
