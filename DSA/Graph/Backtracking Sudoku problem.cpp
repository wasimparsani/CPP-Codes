#include<bits/stdc++.h>
using namespace std;
#define TEZ ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define N 4
int maze[N][N]={{1,0,3,0},{0,0,2,1},{0,1,0,2},{2,4,0,0}};

bool issafe(int i,int j,int n)
{
	for(int k=0;k<N;k++)
		if(maze[i][k] == n || maze[k][j] == n)
			return false;
	
	int s=sqrt(N);
	int rs=i-(i%s);
	int cs=j-(j%s);
	for(int u=0;u<s;u++) {
		for(int v=0;v<s;v++)
			if(maze[u+rs][v+cs] == n)
				return false;
	}
	return true;
}

bool sudoku()
{
	int i,j;
	for(i=0;i<N;i++) {
		for(j=0;j<N;j++)
			if(maze[i][j] == 0)
				break;
		if(maze[i][j] == 0 && j<N)
			break;
	}
	
	if(i == N && j == N)
		return true;
	for(int n=1;n<=N;n++)
	{
		if(issafe(i,j,n))
		{
			maze[i][j]=n;
			if(sudoku())
				return true;
			maze[i][j]=0;
		}
	}
	return false;
}

void printmatrix()
{
	for(int i=0;i<N;i++) {
		for(int j=0;j<N;j++)
			cout<<maze[i][j]<<" ";
		cout<<endl;
	}	
}

int main()
{
	TEZ;
	cout<<"Solve Sudoku, fill the 0 :\n";
	printmatrix();
	if(sudoku() == true)
	{
		cout<<"The Sudoku solution is :\n";
		printmatrix();
	}
	else
		cout<<"This maze is incorrect, There is no solution of this maze";
	return 0;
}

