#include<iostream>
using namespace std;
int binary(int *arr,int i,int j,int key){
    int mid = i + (j - i)/2;
    if(i>j) return -1;
    if(arr[mid] == key) 
        return mid;
    else if(arr[mid] < key
    )
        return binary(arr,mid+1,j,key);
    else 
        return binary(arr,i,mid-1,key);
}
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int key;
    cin>>key;
    cout<<binary(arr,0,6,key);
}