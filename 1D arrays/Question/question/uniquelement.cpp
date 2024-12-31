// finding unique element;
#include<iostream>
using namespace std;
int unique(int a[],int n){
    int num=0;
    for(int i=0;i<n;i++)
        num=num^a[i];   //same type xor  =>  a^a=0;
    return num;
}
int main(){
    int a[9]={1,2,1,2,3,4,3,5,4};
   cout<< unique(a,9);
}










// void unique(int a[],int n){
//     bool found=true;
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(a[i]==a[j])
//                 found =false;
//         }
//         if(found)
//         cout<<a[i]<< "is unique element and its index is = "<<i <<endl;
//     }
// }