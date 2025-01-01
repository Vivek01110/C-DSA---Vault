
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
};


int main(){
    
     heap *h = new heap();

     h->insert(50);
     h->insert(55);
     h->insert(53);
     h->insert(52);
     h->insert(54);
    //  h->insert(1);

     h -> print();
}




































// #include<iostream>
// using namespace std;

// class heap{
//     int arr[100];
//     int size;

//     heap(int size){
//         this -> size = size;
//     }


//     void insert(int data){
//          size++;
         
//         arr[size] = data;

//        int  parent = size/2;
//         int i = size;
//         while(parent > 1){
            
            
//             if(arr[parent] < arr[i]){
//                 swap(arr[parent] , arr[i]);
//             }
//             parent = i/2;
//         }

        
//     }
// }


// int main(){
    
// }