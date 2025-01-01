#include<iostream>
#include<queue>
 using namespace std;
int main(){
//max heap
    priority_queue<int> maxi;  //remove maximum element;
    maxi.push(3);
    maxi.push(4);
    maxi.push(12);
    maxi.push(9);

    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" "; //print maximum element;
        maxi.pop();  //reomove maximum element  in hinidi
    }
    cout<<endl<<endl;


// min heap
    priority_queue<int,vector<int>,greater<int>>mini;
    mini.push(3);
    mini.push(4);
    maxi.push(2);
    mini.push(9);

    int m=mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" "; //print minimum element;
        mini.pop();   //remove minimum element 
    }
    cout<<endl<<endl;
    cout<<"are khali hai kya bhai kya"<<mini.empty();






  
}