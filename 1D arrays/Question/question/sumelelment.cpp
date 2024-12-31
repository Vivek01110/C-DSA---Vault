#include<iostream>
using namespace std;
int sume(int a[],int size){
    int sum;
    for(int i=0;i<size;i++)
        sum+=a[i];
   return sum;
}


int main(){
    int a[5]={1,2,3,4,5};
    int sum;
   cout<< sume(a,5) <<endl;
    // for(int i=0;i<5;i++)
    //     sum+=a[i];
    // cout<<sum;
}
