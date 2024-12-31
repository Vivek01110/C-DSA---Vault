#include<iostream>
using namespace std;
int Iseven(int num){
    // if(num%2==0)
    if(num&1)
    return 0;
              // cout<<"this is even number" <<endl;
    // else
    // cout << "this is odd number" <<endl;
    return 1 ;
}
int main(){
   int n;
   cout << "enter the number";
   cin>>n;
  if( Iseven(n))
  cout<<"this number is even";
  else
  cout<< "this numeber is odd";

}
