#include<iostream>
using namespace std;
int countstair(int n){
    if(n<0)
        return 0;
    if(n==0)
        return 1;
    return countstair(n-1)+countstair(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<countstair(n);
}