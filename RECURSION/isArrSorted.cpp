#include<iostream>
using namespace std; 

bool issorted(int *arr,int n){
    if(n==1)
        return 1;
    if(arr[0]>arr[1])
        return 0;
    else
        return issorted(arr+1,n-1);    
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<issorted(arr+1,10);
}










// bool isSorted(int *arr, int n){
//     int i=0;
//     while(i<n-1){
//         if(arr[i] > arr[i+1])
//            return 0;
//         i++;
//     }
//     return 1;
// }