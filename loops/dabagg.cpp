#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }
        int k=1;
        while(k<=2*i-1){
            cout<<"*";
            k++;
        }
        int m=n-i+1;
        while(m>=1){
            cout<<m;
            m--;
        }
        cout<<endl;
        i++;
    }
}