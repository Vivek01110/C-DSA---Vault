#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    int answer=0;
    int i=0;
    while(n!=0){
      int digit=n%10;   //input is a decimal like 10101;
      int bit=digit&1;  //kyuki digit 1 ya 0 hogi to bit nikalne ki jrurat hi nhi
      if(bit==1){
       answer+= pow(2,i);
      }
      n=n/10;
      i++;
    }
    cout<<answer<<endl;

}