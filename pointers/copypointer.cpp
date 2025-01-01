#include<iostream>
using namespace std;
int main(){
    // int n = 5;
    // int *p = &n;

    // cout<<p<<endl;
    // cout<<*p<<endl;


//   copy of p to q;
    // int *q = p;
    // cout<<p <<"  -  " <<q<<endl;
    // cout<<*p <<"  -  " <<*q<<endl;


//  increment pointer;
 int i=4;
 int n = 256;
 int *t = &i;
   t = t + 1;  //it will forward to the next int location // next 4 bytes;
   cout<<*t;

}