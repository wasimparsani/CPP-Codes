#include<bits/stdc++.h>     //BFS for disconnected graph and counting number of disconnected graph
using namespace std;

void createedge(vector<int> adj[],int a,int b)
{
	adj[a].push_back(b);
	adj[b].push_back(a);
}

void BFS(vector<int> adj[],int s,bool vis[])
{
	queue<int> q;
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

int BFS_Disconnected(vector<int> adj[],int v)
{
	int count=0;
	bool vis[v+1];
	memset(vis,false,sizeof(vis));
	for(int i=0;i<v;i++){
		if(vis[i] == false) {
			BFS(adj,i,vis);
			count++;
		}
	}
	return count;
}

int main()
{
	int v=9,a,b=1;
	
	vector<int> adj[v];
	createedge(adj,0,1);
	createedge(adj,0,2);
	createedge(adj,1,2);
	createedge(adj,3,4);
	createedge(adj,5,6);
	createedge(adj,5,7);
	createedge(adj,7,8);
	
	cout<<endl;
	cout<<"\nThe Number of Disconnected Graph is = "<<BFS_Disconnected(adj,v);
	return 0;
}
