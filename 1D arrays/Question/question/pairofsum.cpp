#include<iostream>
using namespace std;
void pairsum(int a[],int size,int num){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]+a[j]==num)
             cout<<"("<<a[i]<<","<<a[j]<<")"<<endl; 
        }
    }
}
int main(){
    int a[12]={1,3,4,5,6,7,8,5,4,3,2,1};
    int num;
    cout<<"enter number "<<endl;
    cin>>num;
    pairsum(a,12,num);
}
