#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the  nth term ";
    cin>>n;
    int num=0;
    
    
    int second=0;
    cout<<"0 ";
    int first=1;
    cout<<"1 ";

    for(int i=0;i<=n;i++){
       num=first+second;
       second =first;
       first=num;
     
       cout<<num<<" ";
    }
}
// 0 1 1 2 3 5 8 13 21...........