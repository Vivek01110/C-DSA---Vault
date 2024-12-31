#include<iostream>
using namespace std;
int binary(int arr[],int n,int key){
    int i=0;
    int j=n-1;
    while(i<=j){
       // int mid=(i+j)/2     => if i=pow(2,-31) and j=pow(2,31)-1
        // then it will give error;
        int mid=i+(j-i)/2;        //s +(e-s)/2;
        if(arr[mid]==key){
         return mid;
        }
        else if(key<arr[mid])
            j=mid-1;
        else
        i=mid+1;
    }
    return -1;
}
    int main(){
    int arr[10]={2,4,5,7,8,10,11,12,21,24};
    int key;
    cout<<"enter the key";
    cin>>key;
    cout<<"index of"<<key<<"is = "<<binary(arr,10,key);

    }
   