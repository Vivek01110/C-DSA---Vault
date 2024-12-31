#include<iostream>
using namespace std;
int fiibbancci(int n){
    if(n==1 || n==2){
        cout<<n-1<<" ";
        return n-1;
    }
    int ans = fiibbancci(n-1)+fiibbancci(n-2);
    cout<<ans;
    return ans; 
}
int main(){
    int n;
    cin>>n;
    cout<<fiibbancci(n); 
}