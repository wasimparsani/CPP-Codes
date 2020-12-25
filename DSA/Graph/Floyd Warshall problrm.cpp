// Time Complexity = O(v^3)
#include<bits/stdc++.h>
using namespace std;
#define v 4
#define INF 999999

void floyd_warshall(int graph[v][v])
{
	for(int k=0;k<v;k++)
	{
		for(int i=0;i<v;i++)
		{
			for(int j=0;j<v;j++)
			{
				if(graph[i][j]>(graph[i][k]+graph[k][j]) && i!=j)
					graph[i][j]=graph[i][k]+graph[k][j];
			}
		}
	}
	
	for(int i=0;i<v;i++)
	{
		for(int j=0;j<v;j++)
		{
			if(graph[i][j] == INF)
				cout<<" "<<setw(3)<<"INF"<<" ";
			else
				cout<<" "<<setw(3)<<graph[i][j]<<" ";
		}
		cout<<"\n";
	}
}

int main()
{
	int graph[v][v]={{0, 3, INF, 7},  
                    {8, 0, 2, INF},  
                    {5, INF, 0, 1},  
                    {2, INF, INF, 0}};
    floyd_warshall(graph);
	return 0;
}

