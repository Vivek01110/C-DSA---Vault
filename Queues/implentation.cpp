#include <bits/stdc++.h> 
class Queue {
public:
    int *arr;
    int frunt;
    int rear;
    int size;

    Queue() {
        size = 10001;
        arr = new int[size];
        frunt =0;
        rear = 0; 
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(frunt == rear)
            return true;
        else
            return false;
        
    }

    void enqueue(int data) {
        if(rear == size){ 
            return;
        }
        arr[rear++] = data;
    }

    int dequeue() {
        if(frunt == rear)
            return -1;
        
        int elm = arr[frunt];
        arr[frunt] = -1;
        frunt++;

        if(frunt == rear){
            this -> frunt = 0;
           this -> rear = 0;
        }
        return elm;
        
    }

    int front() {
        if(frunt == rear){
            return -1;
        }
        return arr[frunt];
    }
};



// #include<iostream>

// using namespace std;

// class Queue{
//     public:
//     int *arr;
//     int n;
//     int front;
//     int rear;
    

//     Queue(int n){
//         this -> n = n;
//         arr = new int[n];
//         front = 0;
//         rear = -1;
//     }

//     void push(int val){
//         if(rear < n -1)
//             arr[++rear] = val;
//         else{
//             cout << "queue is overflow "<<endl;
//         }
//     }

//     void pop(){
//         if(rear > 0){
//             front++;
//             return;
//         }
//         else{
//             cout<< "queue is overflow ";
//         }
//     }

//    inline int size(){
//         return rear - front + 1;
//     }

//     bool empty(){
//         if(size() == 0)
//             return true;
//         else
//             return false;  
//     }
//     void print(){
//     for(int i=this->front ;i<=this -> rear ;i++){
//         cout<< this -> arr[i] << " ";
//     } 
//     cout << endl;
//     }
// };


// int main(){
    
//     Queue q(10);
//     cout<<"size is : "<< q.size()<<endl;

//     q.push(1);
//     q.push(2);
//     q.push(3);
    
//     q.print();
//     cout<<"size is : " <<q.size()<<endl;

//     q.pop();


//     q.print();

//     cout<<"size is : " <<q.size()<<endl;

    

    

    
// }
















































// #include<iostream>
// using namespace std;
// class Queue{
//     int front;
//     int rear;
//     int *arr;
//     int size;
//     // constructor

//     Queue(int size){
//         this -> size = size;
//         this-> front = -1;
//         this-> rear  = -1;
//         arr = new int[size];
//     }


//     void push(int val){
//         if(rear < size-1)
//             arr[++rear] = val;
//         else{
//             cout<< "Queue OverFlow ";
//         }
//     }

//     void pop(){
//         if(rear < 0)
//             cout<< "Queue Underflow ";
//         else 
//             rear--;
//     }
//     int size(){
//         return rear - front;
//     }

//     bool empty()
// };