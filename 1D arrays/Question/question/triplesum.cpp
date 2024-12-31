#include<iostream>
using namespace std;
void triplesum(int a[],int s,int num){
    for(int i=0;i<s;i++){
        for(int j=i+1;j<s;j++){
            for(int k=j+1;k<s;k++){
                if(a[i]+a[j]+a[k]==num){
                cout<<"("<<a[i]<<","<<a[j]<<","<<a[k]<<")"<<endl;
                }
            }
        }
    }
}
int main(){
     int a[9]={1,2,3,5,6,4,9,8,5};
     int num;
     cout<<"enter the number"<<endl;
     cin>>num;
     triplesum(a,9,num);
}
