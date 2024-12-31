#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool Issafe(int x,int y ,vector<vector<int>>m,in )
void solve(vector<vector<int>>maze,int n,int x,int y,string path,vector<string>&ans,vector<vector<int>>visited){
    if(x == n-1 && y==n-1){
        ans.push_back(path);
        return;
    }
    visited[x][y] = 1;
    // down
    if(maze[x+1][y] == 1 && visited[x+1][y] == 0 && y<n){
        path.push_back('D');
        solve(maze,n,x+1,y,path,ans,visited);
    }
    // up
    else if(maze[x-1][y] == 1 && visited[x-1][y] == 0 && y!=0){
        path.push_back('U');
        solve(maze,n,x-1,y,path,ans,visited);
    }
    else if(maze[x][y+1] == 1 && visited[x][y+1] == 0 && x<n){
        path.push_back('R');
        solve(maze,n,x,y+1,path,ans,visited);
    }
    else if(maze[x][y-1] == 1 && visited[x][y-1] == 0 && x!=0){
        path.push_back('L');
        solve(maze,n,x,y-1,path,ans,visited);
    }
    else
        return;
   
    visited[x][y] = 0;
}
vector<string> mazesolve(vector<vector<int>>maze,int n,string path,vector<string>&ans){
    if(maze[0][0] = 0);
        return ans;
    vector<vector<int>>visited = maze;
    for(int i=0;i<n;i++){
        for(int j = 0;j<n;j++)
            visited[i][j] = 0; 
    }
    solve(maze,n,0,0,path,ans,visited);
    return ans;
}
int main(){
    vector<vector<int>>maze = {{1,1,1,0},{0,1,0,0},{1,1,1,1},{0,1,1,1}};
    int n = 4;
    vector<string>ans ={""};
    string path = "";
  mazesolve(maze,n,path,ans);
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
      cout<<ans[i][j]<<"\t";
  }
    
}
  