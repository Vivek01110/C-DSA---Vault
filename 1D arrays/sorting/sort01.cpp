#include<iostream>
using namespace std;
void sortee(int a[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(a[i]==0)
        i++;
        if(a[j]==1)
        j--;
        if(a[i]==1 && a[j]==0)  // 1,1 wali condition bani to uper do condition lagegi;
        swap(a[i],a[j]);
    }
}

int main(){
    int a[9]={1,0,0,0,1,0,1,1,0};
    sortee(a,8);
    for(int i=0;i<8;i++){
        cout<<a[i]<<" ";
    }
}