#include<iostream>
#include<vector>
#include<stack>
#include<map>
#include<unordered_map>
using namespace std;

vector<vector<int>> make_adj(vector<vector<int>>edges){
    vector<vector<int>> adj;

    for(int i = 0; i < edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }
    return adj;
}
void topo_sort(vector<vector<int>>adj , stack<int>&st, unordered_map<int , bool>& visited, int src){
    visited[src] = true;

    for(int i = 0; i < adj[src].size(); i++){
        if(!visited[adj[src][i]]){
            topo_sort(adj , st, visited , adj[src][i]);
        }
    }
    st.push(src);
}

int main(){
    
     vector<vector<int>>adj;
     vector<vector<int>> edges = {{1,2} , {2,7} ,{7,6},{2,3} , {3,4} , {3,5}};
     adj = make_adj(edges);
     int V = 7;
    stack<int> st;
    unordered_map<int , bool > visited;
    for(int i=0; i < V; i++){
        if(!visited[i]){
            topo_sort(adj , st, visited , i);
        }
    }

     
    }