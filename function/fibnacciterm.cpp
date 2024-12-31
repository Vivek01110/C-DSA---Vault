#include<iostream>
using namespace std;
int fib(int n){
  int first=1;
  int second=0;
  int ans=0;
  for(int i=1;i<n-1;i++){
     ans=first+second;
  second=first;
  first=ans;
}
if(n==1 || n==2)
    return n-1;
else
  return ans;
}
int main(){
    int n;
    cout<<"enter a number" <<endl;
    cin>>n;
    cout<<fib(n);

}