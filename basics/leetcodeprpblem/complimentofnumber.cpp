#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     int m=n;
        if(n==0){
        return 1;
        }
        int mask=0;
        while(m!=0){
            mask = (mask << 1) | 1;          // mask=000000000000001111;
           m = m >> 1;
        }
       int ans=(~n) & mask;
        cout<<ans;
}