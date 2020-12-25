#include<bits/stdc++.h>     //adjancy list for undirected graph
using namespace std;

void createedge(vector<int> adj[],int a,int b)
{
	adj[a].push_back(b);
	adj[b].push_back(a);
}

void printedge(vector<int> adj[],int v)
{
	for(int i=0;i<v;i++)
	{
		for(int x:adj[i])
			cout<<x<<" ";
		cout<<"\n";
	}
}

int main()
{
	int v,a,b=1;
	cout<<"Enter the number of vertices= ";
	cin>>v;
	vector<int> adj[v];
	createedge(adj,0,1);
	createedge(adj,0,2);
	createedge(adj,1,2);
	createedge(adj,1,3);
	createedge(adj,2,3);
	createedge(adj,2,4);
	createedge(adj,3,4);
	cout<<endl;
	printedge(adj,v);
	return 0;
}
