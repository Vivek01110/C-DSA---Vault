#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i){
            cout<<" ";
            j++;
        }
        int k=1;
        while(k<=i){
            cout<<k;
            k++;
        }
        if(i>1){
        int m=i-1;
        while(m>=1){
            cout<<m;
            m--;
        }
    }
    cout<<endl;
    i++;
}
}