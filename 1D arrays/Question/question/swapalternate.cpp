#include<iostream>
using namespace std;
void swapalt(int a[],int n){
    for(int i=0;i<n-1;i+=2){
        swap(a[i],a[i+1]);
    }
}
void printarray(int a[],int n){
    for(int i=0;i<n;i++)
        cout<<a[i] << " ";
        cout<<endl;
}
int main(){
    int a[11]={1,2,3,4,5,6,7,8,9,10,11};
    printarray(a,11);
    swapalt(a,11);
    printarray(a,11);
}