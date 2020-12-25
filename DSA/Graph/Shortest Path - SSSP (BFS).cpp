#include<bits/stdc++.h>     //shortest path in unweighted graph or shortest path between two cities from graph
using namespace std;

void add_edge(vector<int> adj[],int a,int b)
{
	adj[a].push_back(b);
	adj[b].push_back(a);
}

void shortest_path(vector<int> adj[],int v,int s,int d)
{
	int cur=s;
	bool vis[]={false};
	int dis[v+1];
	queue<int> q;
	memset(dis,0,sizeof(dis));
	vis[s]=true;
	dis[s]=0;
	q.push(s);
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		cur=u;
		for(int x:adj[u])
		{
			if(vis[x] == false)
			{
				q.push(x);
				vis[x]=true;
				dis[x]=dis[cur]+1;
			}
		}
	}
	cout<<"\npath between vertices:\n";
	for(int i=0;i<v;i++)
	{
		cout<<i<<":"<<dis[i]<<"\n";
	}
	
	if(dis[d] == 0 || d>v-1)
		cout<<"There is no path between "<<s<<" and "<<d;
	else
		cout<<"The Shortest Path between "<<s<<" and "<<d<<" = "<<dis[d];
}

int main()
{
	int v=8,s,d;
	vector<int> adj[v+1];
	add_edge(adj, 0, 1); 
    add_edge(adj, 0, 3); 
    add_edge(adj, 1, 2); 
    add_edge(adj, 3, 4); 
    add_edge(adj, 3, 7); 
    add_edge(adj, 4, 5); 
    add_edge(adj, 4, 6); 
    add_edge(adj, 4, 7); 
    add_edge(adj, 5, 6); 
    add_edge(adj, 6, 7);

	cout<<"Enter the source and destination : ";
	cin>>s>>d;
	shortest_path(adj,v,s,d);
    return 0;
}
