#include<iostream>
using namespace std;
void sortee(int a[],int n){
   int i=0;
   int j=n;
   while(i<n && j>=0){
     while(a[i]==0)
        i++;
     while(a[j]==2)
     j--;
      if(a[i]==2 && a[j]==1)
      swap(a[i],a[j]);
      if(a[i]==1 && a[j]==0)
      swap(a[i],a[j]); 
      for(int i=0;i<10;i++){
         cout<< a[i]<< " ";
      }   
   }
} 
   int main(){
   int a[10]={1,2,0,1,0,2,0,1,0,1};
   sortee(a,10);
   }
