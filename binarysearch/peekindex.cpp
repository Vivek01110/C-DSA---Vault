#include<iostream>
using namespace std;
int peekindex(int a[],int n){
    int i=0;
    int j=n-1;
    int mid=i+(j-i)/2;
    while(i<j){
        if(a[mid]<a[mid+1])
        i=mid+1;
        else
        j=mid;
        mid=i+(j-i)/2;
    }
    return i;
}
    int main(){
        int a[4]={0,10,5,2};
       cout<<"peek index is : "<< peekindex(a,4)<<endl;
       int b[10]={0,2,4,5,7,30,19,13,5,2};
       cout<<"peek index is : "<< peekindex(b,10)<<endl;
       int c[6]={0,2,7,9,51,2};
       cout<<"peek index is : "<< peekindex(c,6)<<endl;

    }
// int peekindex(int a[],int n){
//     int i=0;
//     int j=n-1;
//     int ans=0;
//     while(i<j){
//         int mid=(i+j)/2;
//         // if(a[mid]>a[mid-1] && a[mid]>a[mid+1])  //no need 
//             ans =mid;
//         else if(a[mid]<a[mid-1])
//         j=mid;  //5,1
//         else
//         i=mid+1;
//     }
//     return ans;