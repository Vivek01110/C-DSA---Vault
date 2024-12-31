#include<iostream>
using namespace std;
void selection(int a[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
           if(a[j]<a[min])
              min=j;
        }
        if(a[min]<a[i]){
          swap(a[min],a[i]);
        } 
    }
}
int main(){
    int a[5]={9,3,7,3,5};
    selection(a,5);
    for(int i=0;i<5;i++){
       cout<<a[i]<<" ";
    }

}
// stable sort => quicksort,heapsort and selection sort; 