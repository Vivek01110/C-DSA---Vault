#include<iostream>
using namespace std;
int search(int *arr,int n,int key){
    if(n==0) return -1;
    if(arr[0]==key) return 0;
    return 1+search(arr+1,n-1,key);
}
int main(){
    int arr[7]={2,3,4,5,6,75,6};
    int key;
    cin>>key;
    cout<<"Index of "<<key<<" is "<<search(arr,7,key);
}