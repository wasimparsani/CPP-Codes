#include<bits/stdc++.h>
using namespace std;

bool issafe(int mat[][8],bool vis[][100],int x,int y,int m,int n,int pre)
{
	return (x>0 && x<m && y>0 && y<n && vis[x][y] == 0 && mat[x][y] == pre);
}

void flood_fill(int mat[][8], int x, int y, int m, int n, int color)
{
	bool vis[100][100]={false};
	queue<pair<int,int>> obj;
	obj.push({x,y});
	vis[x][y]=1;
	while(!obj.empty())
	{
		pair<int,int> coord=obj.front();
		obj.pop();
		int x=coord.first;
		int y=coord.second;
		int previous=mat[x][y];
		mat[x][y]=color;
		
		if(issafe(mat,vis,x+1,y,m,n,previous))
		{
			obj.push({x+1,y});
			vis[x+1][y]=1;
		}
		if(issafe(mat,vis,x-1,y,m,n,previous))
		{
			obj.push({x-1,y});
			vis[x-1][y]=1;
		}
		if(issafe(mat,vis,x,y+1,m,n,previous))
		{
			obj.push({x,y+1});
			vis[x][y+1]=1;
		}
		if(issafe(mat,vis,x,y-1,m,n,previous))
		{
			obj.push({x,y-1});
			vis[x][y-1]=1;
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			cout<<mat[i][j]<<" ";
		cout<<endl;
	}
}

int main()
{
	int m=8,n=8,x=4,y=4,color=3;
	int matrix[][8]= {
	{ 1, 1, 1, 1, 1, 1, 1, 1 },
    { 1, 1, 1, 1, 1, 1, 0, 0 },
    { 1, 0, 0, 1, 1, 0, 1, 1 },
    { 1, 2, 2, 2, 2, 0, 1, 0 },
    { 1, 1, 1, 2, 2, 0, 1, 0 },
    { 2, 1, 1, 2, 2, 2, 2, 0 },
    { 2, 2, 1, 1, 1, 2, 1, 1 },
    { 2, 1, 1, 1, 1, 2, 2, 1 }};
    flood_fill(matrix,x,y,m,n,color);
	return 0;
}

