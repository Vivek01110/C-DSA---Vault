#include<iostream>
using namespace std;
void printt(int *arr ,int &size,int start = 0){ // start from right
    for(int i=start ;i<size;i++)
    cout<<arr[i]<<" "; 
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    printt(arr,size,3);
}