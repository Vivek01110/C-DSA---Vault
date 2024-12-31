#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool Issafe(int n,int x,int y,vector<vector<int>>visited,vector<vector<int>>maze){
    if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y] == 0 && maze[x][y] ==1){
        return true;
    }
    else{
    return false;
    }
}
void solve(vector<vector<int>>maze,int x,int y,int n,vector<string>&ans,string path,vector<vector<int>>visited){
    if(x==n-1 && y==n-1){
        ans.push_back(path);
        return;  
    }
    visited[x][y] = 1;
    //  down  
    if(Issafe(n,x+1,y,visited,maze)){
        path.push_back('D');
        solve(maze,x+1,y,n,ans,path,visited);
        path.pop_back();
    }
    // up;
     if(Issafe(n,x-1,y,visited,maze)){
        path.push_back('U');
        solve(maze,x-1,y,n,ans,path,visited);
         path.pop_back();
    }
    // left
      if(Issafe(n,x,y-1,visited,maze)){
        path.push_back('L');
        solve(maze,x,y-1,n,ans,path,visited);
         path.pop_back();
    }
    // right
      if(Issafe(n,x,y+1,visited,maze)){
        path.push_back('R');
        solve(maze,x,y+1,n,ans,path,visited);
         path.pop_back();
    }
    
    visited[x][y] = 0;

}
vector<string> mazesolve(vector<vector<int>>&maze,int n){
    vector<string>ans;
    if(maze[0][0] == 0) return ans;
    string path = "";
    vector<vector<int>> visited = maze;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++)
        visited[i][j] = 0;
    }
    solve(maze,0,0,n,ans,path,visited);
    return ans;
}


int main(){
vector<vector<int>>maze = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
 vector<string>ans =  mazesolve(maze,4);
  for(int i= 0 ;i<4;i++){
    for(int j =0;j<4;j++){
        cout<<ans[i][j];
    }
    cout<<"\t";
  }
}

