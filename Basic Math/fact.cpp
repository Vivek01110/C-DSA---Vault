#include<iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> factol(int n){
  vector<int>ans;
    int fact = 1; 
    int index = 0;
    for( int i = 2; i<=n;i++){
        fact *=i;
        while(fact!=0){
           index = 0;
            int digit = fact % 10;
            ans[index++]=digit;
            fact /=10;
        }
    }
    reverse(ans.begin(),ans.begin()+index);
    return ans;
}
int main(){
    int n;

    cout<<"enter the number : ";
    cin>>n;
    vector<int> ans = factol(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" "; 
    }
}