#include<iostream> 
#include<vector>
using namespace std;


class Heap{
    int size = 0;
    int arr[100];

    void insert(int key){
        size ++;
        arr[size] = key;
    
        int index = size;

        while(index > 1){
            int parent = index/2;

            if(arr[parent] < arr[index]){
                swap(arr[parent] , arr[index]);
            }
            index = parent;
        }
    }
};
void Heapify(int *arr, int n , int i){
    int largest = i;

    int left = 2*i;
    int right = 2*i +1;

    if(left <= n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right <= n && arr[largest] < arr[right]){
        largest = right;
    }

    if(largest != i){
        swap(arr[largest] , arr[i]);
        Heapify(arr,n, largest);
    }
}

void BuildHeap(int *arr,int n){
    for(int i = n/2; i>0; i--){
        Heapify(arr,n,i);
    }
}


void Heapsort(int *arr , int n){
    BuildHeap(arr, n); // convert arr into heap;
    
    int size = n;

    while(size > 1){
        swap(arr[1],arr[size]); 
        size --; // virtually remove from heap;
        Heapify(arr,size,1); 
    }
}

int main(){
      
      
     int arr[10] = {-1,1,4,7,9,6,8,5,2,3};
      Heapsort(arr,9);
       cout << "sort to hho gaya hai : "<< endl;
      for(int i=1;i<10;i++){
          cout << arr[i] << " ";
      }

}



// 2.wrong 
// #include<iostream> 
// using namespace std;

// void Heapify(int * arr,int i){
//     int largest = i;

//     int left = 2*i;
//     int right = 2*i + 1;

//     if(arr[left] < arr[largest]){
//         largest = i;
//     }

//     if(arr[right] < arr[largest]){
//         largest = i;
//     }

//     if(largest != i){
//         swap(arr[largest] , arr[i]);
//         Heapify(arr,largest);
//     }
// }
// void HeapSort(int *arr,int n){
//     int size = n;

//     for(int i = n/2;i>=1;i--){
//         Heapify(arr,i);
//     }
// }


// int main(){
//     int n;
//     cout << "Enter the size of array : ";
//     cin >> n;

//     int *arr = new int[n];
//     arr[0] = -1;

//     for(int i=1;i<=n;i++){
//         cin >> arr[i];
//     }
//     cout << "\n";
//     for(int i=1;i<=n;i++){
//         cout << arr[i] << " ";
//     }

//     HeapSort(arr, n);
//     cout << "\n";
//     for(int i=1;i<=n;i++){
//         cout << arr[i] << " ";
//     }
// }



















