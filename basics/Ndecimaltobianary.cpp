// for negative number 
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout <<"enter the number"<<endl;
    cin>>n;
    int num=n;
    int ans=0;
    int i=0;
    while(n!=0){
       int bit=n&1;
      bit=~bit;   //   1's compliment ;
       n=n>>1;
        ans=(pow(10,i)*bit)+ans;
       if(i==0)
       ans=ans^1;    // +1 karne ke liye ; //XOR OPERATOR;
       
       i++;
    }
cout<<ans<<endl;

}
