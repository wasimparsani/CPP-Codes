#include<bits/stdc++.h>     // it checks whether a undirected graph contain a cycle or not 
using namespace std;

void createedge(vector<int> adj[],int a,int b)
{
	adj[a].push_back(b);
	adj[b].push_back(a);
}

bool DFS(vector<int> adj[],int s,bool vis[],int parent)
{
	
	vis[s]=true;
	for(int v:adj[s])
	{
		if(vis[v]==false) {
			if(DFS(adj,v,vis,s) == true)
				return true;
		}
		else if(v != parent)
			return true;
	}
	return false;
	
}

bool DFS_cyclic(vector<int> adj[],int v)
{
	bool vis[v+1];
	memset(vis,false,sizeof(vis));
	for(int i=0;i<v;i++){
		if(vis[i] == false) {
			if(DFS(adj,i,vis,-1) == true)
				return true;
		}
	}
	return false;
}

int main()
{
	int v=6,a,b=1;
	
	vector<int> adj[v];
	createedge(adj,0,1);
	createedge(adj,1,2);
	createedge(adj,1,3);
	createedge(adj,2,3);
	createedge(adj,2,4);
	
	cout<<endl;
	if(DFS_cyclic(adj,v) == true)
		cout<<"Yes! Graph contains a cycle";
	else
		cout<<"No cycle in the Graph";
	return 0;
}
