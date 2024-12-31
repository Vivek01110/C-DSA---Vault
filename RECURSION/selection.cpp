#include<iostream>
using namespace std;
void selection(int *arr,int n){
    if(n<=1) return;
    int min = arr[0];
    int minindex = 0;
    for(int j = 1;j < n; j++){
         if(min>arr[j]){
            min = arr[j];
            minindex = j;  
        }
        
    }
    if(arr[0]>arr[minindex])
            swap(arr[0],arr[minindex]);
    selection(arr+1,n-1);
    return;
}
int main(){
   
    int arr[7] = {2,4,3,7,5,4,3};
    selection(arr,7);
    for(int i=0 ;i<7;i++){
        cout<<arr[i]<<" ";
    }
}