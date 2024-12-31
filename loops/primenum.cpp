#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number"<<endl;;
cin>>n;
int i=2;
bool flag =true;
while(i<n){
  if(n%i==0){
    flag=false;
    
    
  }
  i++;
}
if(flag==true)
 cout<<"this number is  prime number";
else cout<<"this is not prime number";
}