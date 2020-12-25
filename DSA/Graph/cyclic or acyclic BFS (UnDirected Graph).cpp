//Title:
//Description:
//Time_Complexity:
//Space_Complexity:

#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int v,int u){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

bool BFSrec(vector<int> adj[],int s,int v,bool visited[]){
	int parent[v];
	for(int i=0;i<v;i++) parent[i]=-1;
	queue<int> q;
	visited[s]=true;
	q.push(s);
	while(!q.empty()){
		int u=q.front();
		q.pop();
		for(int x:adj[u]){
			if(!visited[x]){
				visited[x]=true;
				q.push(x);
				parent[x]=u;
			}
			else if(parent[u]!=x) return true;
		}
	}
	return false;
}

bool BFS(vector<int> adj[],int v){
	bool visited[v];
	for(int i=0;i<v;i++) visited[i]=false;
	for(int i=0;i<v;i++){
		if(visited[i]==false){
			if(BFSrec(adj,i,v,visited)==true) return true;
		}
	}
	return false;
}

int main(){
	int v=3;
	vector<int> adj[v];
	addEdge(adj,0,1);
	addEdge(adj,0,2);
	if(BFS(adj,v))
		cout<<"Graph Contains a Cycle";
	else
		cout<<"No cycle in graph";
	return 0;
}

