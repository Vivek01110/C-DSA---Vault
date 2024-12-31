#include<iostream>
using namespace std;
void reverse(int a[],int n){
    int start=0;
    int end=n-1;
   while(start<end){
    swap(a[start],a[end]);
    start++;
    end--;
   }

   }

int main(){
int a[6]={1,2,3,4,5,6};
for(int i=0; i<6;i++){
    cout<<a[i] << " ";
}
cout<<endl;
reverse(a,6);
for(int i=0; i<6;i++){
    cout<<a[i] << " ";
}

}
// void reverse(int a[],int size){
//     for(int i=0;i<size/2;i++){
//         int temp=a[i];
//        a[i]= a[size-i-1];
//        a[size-1-i]=temp;
//     }
