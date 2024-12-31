#include<iostream>
using namespace std;
void spiral(int arr[3][4]){
    int r=3;
    int c = 4;
    int sr=0;
    int er = r-1;
    int sc = 0;
    int ec = c-1;
    int count = 0;
         while(count<(r*c)){
            cout <<" loop 1"<<endl;
         for(int j=sc ;j<=ec;j++){
             cout<<arr[sr][j]<<" ";
         }
         sr++;        
          cout <<" loop 2"<<endl; 
         for(int j=sr;j<=er;j++){
             cout<<arr[j][ec]<<" ";
         }
         ec--;
          cout <<" loop 3"<<endl;
         for(int j=ec;j>=sc;j--){
             cout<<arr[er][j]<<" ";
         }
         er--;
          cout <<" loop 4"<<endl;
         for (int j=er;j>=sr;j--){
              cout<<arr[j][sc]<<" ";
         }
         sc++;
         count++;
         }
   
}
int main(){
    int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    spiral(arr);
    
}