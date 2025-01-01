#include<iostream>
using namespace std;
int main(){
    int r;
    int c;
    cout<<"enter the number of row : ";
    cin>>r;
    cout<<"enter the number of column : ";
    cin>>c;

    int **arr  = new int *[r]; 
   for(int i=0 ;i<r;i++){
        arr[i] = new int[c];
   }

   for(int i=0;i<r;i++){
    for(int j=0 ;j<c;j++){
        cin>>*(arr[i]+j);   //arr[i][j]
    }
   }
   
   for(int i=0;i<r;i++){
    for(int j=0 ;j<c;j++){
        cout<<*(arr[i]+j)<<" ";   //arr[i][j]
    }
    cout<<endl;
   }

   for(int i=0 ;i<r;i++){
       delete [] arr[i] ; //arr[i] is the name of int * arrays ;
   }
   delete [] arr;


}