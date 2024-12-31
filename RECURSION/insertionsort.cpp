#include<iostream>
using namespace std;
void insertion(int *a,int n){
  if(n<=1) return;
  insertion(a,n-1);

  int i = n-1;
  int j = n-2;
  int temp = a[i];
  while(j>= 0 && a[j]>temp){
    a[j+1] = a[j];
    j--;
  }
  a[j+1] = temp;
}
int main (){
    int arr[8]= {1,8,7,4,5};
    insertion(arr,8);
    for(int i=0 ;i<8;i++){
        cout<<arr[i]<<" ";
    }
}










 // int i=1;
    // while(i<n){
    //     int j = i-1;
    //     int main = a[i];
    //     while(j>=0){
    //         if(a[j]>main){
    //         a[j+1] = a[j];
    //         }
    //         else
    //             break;
    //         j--;
    //     }
    //     a[j+1] = main;
    //     i++;
    // }