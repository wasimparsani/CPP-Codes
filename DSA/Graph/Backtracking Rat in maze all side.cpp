#include <bits/stdc++.h>
using namespace std;

#define MAX 5

bool issafe(int x,int y,int m[MAX][MAX],int n,bool visited[MAX][MAX])
{
    if(x == -1 || y == -1 || x == n || y == n || visited[x][y] || m[x][y] == 0)
        return false;
    return true;
}

void printpathrec(int x,int y,int m[MAX][MAX],int n,vector<string> &possiblepath,bool visited[MAX][MAX],string &path)
{
    if(x == -1 || y == -1 || x == n || y == n || visited[x][y] || m[x][y] == 0)
        return;
    if(x == n-1 && y == n-1)
    {
        possiblepath.push_back(path);
        return;
    }
    visited[x][y]=true;
    if(issafe(x+1,y,m,n,visited))
    {
        path.push_back('D');
        printpathrec(x+1,y,m,n,possiblepath,visited,path);
        path.pop_back();
    }
    if(issafe(x,y-1,m,n,visited))
    {
        path.push_back('L');
        printpathrec(x,y-1,m,n,possiblepath,visited,path);
        path.pop_back();
    }
    if(issafe(x,y+1,m,n,visited))
    {
        path.push_back('R');
        printpathrec(x,y+1,m,n,possiblepath,visited,path);
        path.pop_back();
    }
    if(issafe(x-1,y,m,n,visited))
    {
        path.push_back('U');
        printpathrec(x-1,y,m,n,possiblepath,visited,path);
        path.pop_back();
    }
    visited[x][y]=false;
}

vector<string> printPath(int m[MAX][MAX], int n) {
    // Your code goes here
    vector<string> possiblepath;
    bool visited[MAX][MAX];
    string path;
    memset(visited,false,sizeof(visited));
     
    printpathrec(0,0,m,n,possiblepath,visited,path);
    
    return possiblepath;
    
}
int main() {
        int n=5;
        int m[MAX][MAX] = {{ 1, 0, 0, 0, 0 },{ 1, 1, 1, 1, 1 },{ 1, 1, 1, 0, 1 },{ 0, 0, 0, 0, 1 },{ 0, 0, 0, 0, 1 } }; 
    
        vector<string> result = printPath(m, n);
        if (result.size() == 0)
            cout <<"-1";
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
    return 0;
}

