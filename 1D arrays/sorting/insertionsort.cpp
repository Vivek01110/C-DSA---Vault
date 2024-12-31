#include<iostream>
using namespace std;
void InsertionSort(int a[],int n){
     for(int i = 1; i < n; i ++){
        int temp = a[i];
        int j = i - 1;
        while( j >= 0){
            if(a[j] > temp)   //1 3 4 17 10
              a[j + 1]=a[j];
            else
              break;
              j-- ;  
        }
        a[j + 1] = temp;
    }
}
int main(){
    int a[10] = {1,9,2,5,4,3,6,7,8,9};
    InsertionSort(a,10);
    for(int i = 0; i < 10; i++)
        cout<<a[i]<<" ";
}