#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number" << endl;
    cin>>n;
    int count;
    while(n!=0){
    if(n&1)
    count++; 
    n=n>>1;
    }
    if(count==1)
    cout<<"it is the power of two ";
    else
    cout<< "it is not the power of two";


}
//we can check by checking number of 1 bit;
// if number of 1 bit is =one then it is power of two;
// 8=1000
    // /2^3