#include<iostream>
#include<queue>

using namespace std;

int main (){
    queue<int>q;

    q.push(1);
    q.push(2);
    q.push(3);

    cout<< "size of queue : "<< q.size() << endl;


    q.pop();//1 popped
    q.pop();// 2 popped

    cout<< "size of queue : "<< q.size() <<endl;

    if(q.empty())
        cout<< "queue is empty  : "<< endl;
    else 
        cout << "queue is not empty : " << endl;

}