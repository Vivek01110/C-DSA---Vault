#include<iostream>
using namespace std;
int power(int a, int b,int m){
    int res = 1;
    while(b>0){
        
    if(b&1){     //b last bit is 1; 
       res =( res * a)%m;
    }
        a = (a*a)%m;    //a= ((a%m) * (a%m))%m     //both are equal;  //modular arithmatics 
        b=b>>1;
    }
    return res;
}
int main(){
    int a = 2;
    int b = 3;
    int m  = 5;
    cout<<power(2,3,5);
}