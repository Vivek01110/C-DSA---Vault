#include<iostream>
using namespace std;
int fact(int n){
    int fact;
    for(int i=1;i<=n;i++)
        fact=fact*i;
        return fact;
    }
    int ncr(int n,int r){
        int ncr =fact(n)/(fact(r)*fact(n-r));
        return ncr;
    }
    int main(){
        int n;
        cout << "enter the n " <<endl;
        cin>>n;
        int r;
        cout <<"enter the r"<< endl;
        cin>>r;
        cout<<"ncr = "<<ncr(n,r)<<endl;
    }

