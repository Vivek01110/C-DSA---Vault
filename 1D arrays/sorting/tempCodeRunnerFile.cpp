#include<iostream>
using namespace std;
void selection(int a[],int n){
    for(int i=0;i<n;i++){
        int min=a[i];
        for(int j=i+1;j<n;j++){
           if(a[j]<min)
           min=a[j];
        }
        if(min<a[i]){
            swap(min,a[i]);
        }
    }
}
int main(){
    int a[10]={3,4,5,18,2,5,9,6,4,8};
    selection(a,10);
    for(int i=0;i<10;i++){
       cout<<a[i]<<" ";
    }
    
}