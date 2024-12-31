#include<iostream>
using namespace std;
void bubble(int *arr,int n){
    bool swapped = true;
    if(n<=1) return;

    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swapped = false;
        }
    }
    if(swapped) return ;
    bubble(arr,n-1);
    return;
}
int main(){
    int arr[7] = {2,4,3,7,5,4,3};
    bubble(arr,7);
    for(int i=0 ;i<7;i++){
        cout<<arr[i]<<" ";
    }
}