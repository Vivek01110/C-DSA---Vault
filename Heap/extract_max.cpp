#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size = 0;

    // heap(int size){
    //     this -> size = size + 1;
    // }
    
    void insert(int key){
       
       this -> size ++;
        arr[size] = key;

       int index =  size;

       while(index > 1){
          int parent = index/2;

          if(arr[parent] < arr[index]){
            swap(arr[parent] , arr[index]);
             index = parent;
          }
          else{
            return;
          }
       }
    }
     void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<< " ";
        }
     }

     void delete_elm(){
        arr[1] = arr[size];

        size--;

        int i = 1;

        while(i< size){

            int leftchild = 2*i;
            int rightchild = 2*i +1;

            if(leftchild < size && arr[leftchild] > arr[i] && arr[leftchild] > arr[rightchild]){
                swap(arr[leftchild] , arr[i]);
                i = leftchild;
            }
            else if(rightchild <size && arr[rightchild] > arr[i] && arr[leftchild] < arr[rightchild]){
                swap(arr[rightchild] , arr[i]);
                i = rightchild;
            }
            else{
                return;
            }
        }

     }
};


int main(){
    
     heap *h = new heap();

     h->insert(60);
     h->insert(54);
     h->insert(57);
     h->insert(52);
     h->insert(53);
    //  h->insert(1);



     h -> print();
     cout << endl;
     h -> delete_elm();
     h -> print();
}