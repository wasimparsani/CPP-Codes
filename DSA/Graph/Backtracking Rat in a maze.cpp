#include<bits/stdc++.h>
using namespace std;
#define TEZ ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

# define n 5

int maze[n][n]={{1,0,0,0,1},{1,1,0,1,1},{0,1,1,0,0},{0,1,0,0,0},{1,1,1,1}},sol[n][n]={0};

bool issafe(int i,int j)
{
	if(i<n && j<n && maze[i][j] == 1)
		return true;
	return false;
}

void printmatrix(int sl[n][n])
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<sl[i][j]<<" ";
		cout<<endl;
	}
}

bool inmazerec(int i,int j)
{
	if(i == n-1 && j == n-1)
	{
		sol[i][j]=1;
		return true;
	}
	if(issafe(i,j) == true)
	{
		sol[i][j]=1;
		if(inmazerec(i+1,j) == true)
			return true;
		else if(inmazerec(i,j+1) == true)
			return true;
		sol[i][j]=0;
	}
	return false;
}

bool inmaze()
{
	if(inmazerec(0,0))
	{
		printmatrix(sol);
		return true;
	}
	else
		return false;
}

int main()
{
	TEZ;
	if(inmaze())
		cout<<"\nRat can acces cheeze";
	else{
		printmatrix(sol);
		cout<<"\nThere is no path in maze to acces cheeze";
	}
	return 0;
}

