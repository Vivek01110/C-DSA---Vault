#include<iostream>
using namespace std;
int firstoccurence(int arr[],int n,int key){
    int i=0;
    int j=n-1;
    int ans;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(key==arr[mid]){
            ans=mid;
            j=mid-1;
        }
        else if(key<arr[mid])
        j=mid-1;
        else
        i=mid+1;
    }
    return ans;
}
int lastoccurence(int arr[],int n,int key){
    int i=0;
    int j=n-1;
    int ans;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(key==arr[mid]){
            ans=mid;
            i=mid+1;
        }
        else if(key<arr[mid])
        j=mid-1;
        else
        i=mid+1;
    }
    return ans;
}
int main(){
    int arr[8]={0,1,1,1,1,2,2,5};
    int key;
    cout<<"enter the number";
    cin>>key;
    cout<<firstoccurence(arr,8,key)<<endl;
  cout<<lastoccurence(arr,8,key)<<endl;
  int totalnumofocurence=(lastoccurence(arr,5,key)-firstoccurence(arr,5,key))+1;
  cout<<totalnumofocurence;
  
//   pair<int,int>p;
    // p.firstoccurence(arr,5,key);
    // p.lastoccurence(arr,5,key);
    // return p;
    // p is the name of pair;
}

















// #include<iostream>
// using namespace std;
// void occurence(int a[],int n,int key){
//     int i=0;
//     while(i<n){
//         if(a[i]==a[i+1] && a[i]==key){
//         cout<<"first index is"<<i<<" ";
//         i++;
//         if(a[i]!=a[i+1]){
//         cout<<"last occcurence"<<i;
//         break;
//         }
//         i--;
//         }
//         i++;
//     }
// }
