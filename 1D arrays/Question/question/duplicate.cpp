#include<iostream>
using namespace std;
void duplicate(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
        if(a[i]==a[j])
        cout<<a[i]<<" has duplicate element its index is "<<i<< " "<<j<< endl;
        }
    }
}
int main(){
    int a[12]={2,3,4,3,6,5,2,7,8,11,12};
    duplicate(a,10);
}