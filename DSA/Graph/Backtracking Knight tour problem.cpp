#include<bits/stdc++.h>
using namespace std;
#define n 5

bool issafe(int x,int y,int sol[n][n])
{
	return (x>=0 && x<n && y>=0 && y<n && sol[x][y] == -1);	
}

void printmatrix(int sol[n][n])
{
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++)
			cout<<" "<<setw(2)<<sol[i][j]<<" ";
		cout<<"\n";
	}
}

bool knight_rec(int x,int y,int count,int sol[n][n],int xmove[],int ymove[])
{
	if(count == n*n)
		return true;
	for(int i=0;i<8;i++)
	{
		int nx=x+xmove[i];
		int ny=y+ymove[i];
		if(issafe(nx,ny,sol) == true)
		{
			sol[nx][ny]=count;
			if(knight_rec(nx,ny,count+1,sol,xmove,ymove) == true)
				return true;
			sol[nx][ny]=-1;
		}
	}
	return false;
}

void knighttour()
{
	int sol[n][n];
	int xmove[8]={2, 1, -1, -2, -2, -1, 1, 2};
	int ymove[8]={1, 2, 2, 1, -1, -2, -2, -1};
	memset(sol,-1,sizeof(sol));
	sol[0][0]=0;
	if(knight_rec(0,0,1,sol,xmove,ymove) == false)
		cout<<"Solution for "<<n<<" is not possible";
	else
		printmatrix(sol);
	
}

int main()
{
	knighttour();
	return 0;
}

