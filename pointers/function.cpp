#include<iostream>
using namespace std;
// void update(int *p){
//     // p = p + 1; //function ka pointer next location pe point karne lagega;
//     *p = *p + 1;

// }
// int main (){
// int num = 5;
// int *p = &num;
// update(p);
// }

// arrays in function;


int getsum(int arr[],int n){    //instead of int arr[] ,int *arr ths will point to 1st index of arr;
    cout<< "size is  : "<<sizeof(arr)<<endl;  // return size  of  *int  = 8 not actually int [] = n x 4;
    int sum = 0;
    for (int i=0;i<n ; i++){
         sum += arr[i];
    }
    return ;
}
int main (){
  int arr[10] ={0};
  getsum(arr + 3,10);  //int *arr passing ;
}
