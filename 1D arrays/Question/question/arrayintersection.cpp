// intersection of two array ;
#include<iostream>
using namespace std;
void intersection(int a[],int as,int b[],int bs){
    int i=0;
    int j=0;
    while(i<as && j<bs){
         if(a[i]==b[j]){
            cout<<a[i]<<" ";
            i++;
            j++;
         }
         else if(a[i]<b[j]) 
          i++;
         else 
         j++;
        }
    }
    


int main(){
    int a[5]={1,3,5,7,10};
    int b[7]={1,4,5,6,7,9,10};
    intersection(a,5,b,7);  
}




// this is for general
// for(int i=0;i<as;i++){
//     for(int j=0;j<bs;j++){
    //         if(a[i]==b[j]){
    //         cout<<a[i]<<" ";
    //         a[i]=-242335;
    //         break;   
    //         }
    //     }