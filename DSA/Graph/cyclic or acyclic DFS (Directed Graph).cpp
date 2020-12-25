#include<bits/stdc++.h>     // it checks whether a directed graph contain a cycle or not 
using namespace std;

void createedge(vector<int> adj[],int a,int b)
{
	adj[a].push_back(b);
}


bool DFS_Rec(vector<int> adj[],int s,bool vis[],bool stack[])
{
	stack[s]=true;
	vis[s]=true;
	for(int v:adj[s])
	{
		if(vis[v]==false && DFS_Rec(adj,v,vis,stack)) 
			return true;
		else if(stack[v])
			return true;
	}
	stack[s]=false;	
	return false;
	
}

bool DFS_Cyclic(vector<int> adj[],int v)
{
	bool vis[v]={false};
	bool stack[v]={false};
	for(int i=0;i<v;i++){
		if(vis[i] == false) {
			if(DFS_Rec(adj,i,vis,stack))
				return true;
		}
	}
	return false;
}

int main()
{
	int v=5;
	
	vector<int> adj[v];
	createedge(adj,0,1);
	createedge(adj,2,1);
	createedge(adj,2,3);
	createedge(adj,3,4);
	createedge(adj,2,4);
	cout<<"\n\nwasim bhai\n\n";
	if(DFS_Cyclic(adj,v))
		cout<<"Yes! Graph has a cycle";
	else
		cout<<"No cycle in the Graph";
	return 0;
}
