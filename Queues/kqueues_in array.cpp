#include<iostream>
using namespace std;
class Nqueues{
    int *arr;
    int *front;
    int *rear;
    int *next;
    int freespot;

    Nqueues(int size ,int N){
        arr  = new int[size];
        front = new int[N];    
        rear = new int[N];
        next = new int[size];

        for(int i=0;i<N; i++){
            front[i] = rear[i] = -1;
        }

        for(int i=0;i<size;i++){
            next[i] = i+1;
        }
        next[size -1] = -1;


        freespot = 0;
    }
    
    bool push(int val, int N){
        if (freespot == -1) 
            return false;
        

            int index = freespot;

            freespot = next [index];

            if(front[N-1] == -1)
                front[N-1] = index;

            else{

            // it is for linked the pervious element from the present element ;
              next[rear[N-1]] = index;
            }

            next[index] = -1;

            rear [N-1] = index;

            arr[index] = val;
            }

        void pop(int N){
            if(front[N-1]== -1)
                cout<<"queue is underflow : ";
            
            else{
                int index = front[N-1];
                front[N-1] = next[index];

                next[index] = freespot;

                freespot  = index;
            }
                
            
        }
    }

 

int main (){

}