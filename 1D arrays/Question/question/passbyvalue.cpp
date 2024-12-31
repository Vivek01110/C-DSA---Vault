#include<iostream>
using namespace std;
void update( int a[],int size ){
    a[0]=12;                         //array ki value change ho jayegi;
    for(int i=0;i<5;i++){
        cout<<a[i] << " ";
    }
    cout<<endl;

}
int main(){
    int a[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout<<a[i] << " ";
    }
    cout<<endl;

    update(a,5);  //array ka adress pass hota hai function me;
    for(int i=0;i<5;i++){
        cout<<a[i] << " ";
    }
    

}