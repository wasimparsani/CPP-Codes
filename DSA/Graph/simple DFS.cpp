#include<bits/stdc++.h>     //BFS for disconnected graph and counting number of disconnected graph
using namespace std;

void createedge(vector<int> adj[],int a,int b)
{
	adj[a].push_back(b);
	adj[b].push_back(a);
}

void DFSrec(vector<int> adj[],int s,bool vis[])
{
	
	vis[s]=true;
	cout<<s<<" ";
	for(int v:adj[s])
	{
		if(vis[v]==false)
			DFSrec(adj,v,vis);
	}
	
}

void DFS(vector<int> adj[],int v)
{
	bool vis[v+1];
	memset(vis,false,sizeof(vis));
	for(int i=0;i<v;i++){
		if(vis[i] == false) 
			DFSrec(adj,i,vis);
	}
}

int main()
{
	int v=6,a,b=1;
	
	vector<int> adj[v];
	createedge(adj,0,1);
	createedge(adj,2,3);
	createedge(adj,2,4);
	
	cout<<endl;
	DFS(adj,v);
	return 0;
}
