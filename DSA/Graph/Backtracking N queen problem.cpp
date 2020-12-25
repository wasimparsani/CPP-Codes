#include<bits/stdc++.h>
using namespace std;
#define TEZ ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define n 5
int board[n][n]={0};

bool issafe(int row,int col)
{
	for(int j=0;j<col;j++)
		if(board[row][j])
			return false;
	for(int i=row,j=col;i>=0 && j>=0;i--,j--)
		if(board[i][j])
			return false;
	for(int i=row,j=col;i<n && j>=0;i++,j--)
		if(board[i][j])
			return false;
	return true;
}

bool queenrec(int col)
{
	if(col == n)
		return true;
	for(int i=0;i<n;i++)
	{
		if(issafe(i,col))
		{
			board[i][col]=1;
			if(queenrec(col+1))
				return true;
			board[i][col]=0;
		}
	}
	return false;
}

void printmatrix()
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<board[i][j]<<" ";
		cout<<endl;
	}
}

bool nqueen()
{
	if(queenrec(0))
	{
		printmatrix();
		return true;
	}
	else
		return false;
}

int main()
{
	TEZ;
	if(nqueen())
		cout<<"\nYes, N queen are set in board such that no queen can attack each other.";
	else
		cout<<"\nSorry, N queen are impossible to set in a board.";
	return 0;
}

