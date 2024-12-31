#include<iostream>
using namespace std;
int sume(int *arr,int n){
    if(n==1)
        return *arr;
    return *(arr)+sume(arr+1,n-1);
}
int main (){
    int arr[10] ={1,2,3,4,5,6,7,8,9,10};
    cout<<sume(arr,10);
}
