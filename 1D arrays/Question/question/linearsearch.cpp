#include<iostream>
using namespace std;
bool search(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element) return true;
        
    }
     return false;
}

int main(){
  int a[6]={-2,4,5,-3,-7,-8};
  bool found=search(a,6,4);
  if(found)
  cout<<"element is present" << endl;
  else cout <<"element is not present" <<endl;
}
  
  
  
  
  
  
  
  
  

  
//     int arr[10]={3,6,5,4,32,8,9,45,23,-1};
//     bool search=false;
//     int index;
//     for(int i=0;i<10;i++){
//         if(arr[i]==-1)
//         index=i;
//         search=true;
//     }
//     if(search==true)
//     cout<<"-1 is present and its index is : "<<index;
// // 