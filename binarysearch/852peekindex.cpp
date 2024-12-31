#include<iostream>
using namespace std;
 int peekindex(int arr[],int n){
    int i=0;
    int j=n-1;
    int mid=i+(j-1)/2;
    

    while(i<=j){
        if(arr[mid]>arr[mid-1] &&arr[mid]>arr[mid+1])
        return mid;
        else if(arr[mid+1]>arr[mid-1])
        i=mid+1;
        else
        j=mid-1;

        mid=i+(j-i)/2;  
    }
    return -1;
 
}
int main(){
    int arr[7]={1,7,4,3,1,1,0};
    cout<<"this is the peek index "<<peekindex(arr,7)<<endl;

}


// int i=0;
//     int j=arr.size()-1;
//     int ans=0;
//     int mid=i+(j-i)/2;
//     while(i<j){
//         if(arr[mid]<arr[mid+1])
//         i=mid+1;
//         else 
//         j=mid;
//          mid=i+(j-i)/2;
//     }
//     return mid;