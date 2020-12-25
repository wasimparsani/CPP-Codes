#include <bits/stdc++.h>

using namespace std;

void print(int n, vector<int> sol[]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << sol[i][j] << " ";
        }
        cout << endl;
    }
}

void solve(int n, vector<int> maze[]);

bool issafe(vector<int> maze[],int x,int y,int n)
{
    if(x<n && y<n && maze[x][y] != 0)
        return true;
    return false;
}

bool solverat(int x,int y,vector<int> maze[],int n,vector<int> (&sol)[])
{
    if(x == n-1 && y == n-1)
    {
        sol[x][y]=1;
        return true;
    }
    
    if(issafe(maze,x,y,n))
    {
        sol[x][y]=1;
        for(int i=1;i<=maze[x][y] && i<n;i++)
        {
            if(issafe(maze,x+i,y,n))
                return true;
            if(issafe(maze,x,y+i,n))
                return true;
        }
        sol[x][y]=0;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> maze[n];
        for (int i = 0; i < n; i++) {
            maze[i].assign(n, 0);
            for (int j = 0; j < n; j++) cin >> maze[i][j];
        }

        solve(n, maze);
    }
    return 0;
}
// } Driver Code Ends

void solve(int N, vector<int> maze[]) {
    vector<int> sol[N];
	for (int i = 0; i < N; i++) 
            sol[i].assign(N, 0);
        
            
    if(solverat(0,0,maze,N,sol))
        print(N,sol);
    else
        cout<<"No Solution exist";
}
