#include<iostream>
#include<list>
#include<map>
#include<unordered_map>
using namespace std;
// template <typename T> 
class Graph{
    public:
    int V;
    unordered_map<int , list<int>>adjlist;
    // unordered_map<T , list<T>>adjlist; for general objects

   

     void Add_edge(int u , int v,bool direction){
        // direction = 0  // undirected Graph
        //direction = 1 // directed Graph
        this -> adjlist[u].push_back(v);

        if(direction == 0){
               this -> adjlist[v].push_back(u);
        }
    }

    void printAdjecensyList(){
        for(auto i : adjlist){
            cout << i.first << " -> ";

            for(auto j : i.second){
                cout  << j << " , ";
            }
            cout<< endl;
        }
    }


};
int main(){
    cout << "Enter the numeber nodes : "<< endl;
    int n;
    cin >> n;

    cout << "Enter the number of Edges :"<< endl;
    int E;
    cin >> E;

    Graph g;
    for (int i=0;i<E;i++){
        int u,v;
        cout<<"enter the vertices in the graph : ";
        cin >> u >> v;

        g.Add_edge(u , v,0);
    }

    g.printAdjecensyList();
}