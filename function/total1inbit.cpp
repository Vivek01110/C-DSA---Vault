// a and b ke bit me total kitne one hai;
#include<iostream>
using namespace std;
int onebit(int a, int b){
    int acount=0,bcount=0;   
    while(a!=0){
        if(a&1)
        acount++;
        a=a>>1;
    }
        while(b!=0){
        if(b&1)
        bcount++;
        b=b>>1;
    }
    return acount+bcount;
}
int main(){
    int a;
    cout<< "enter a : ";
    cin>>a;
    int b;
    cout<< "enter b : ";
    cin>>b;
    cout<<onebit(a,b);
}