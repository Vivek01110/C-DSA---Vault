#include<iostream>
using namespace std;
int main(){
    float f;
  int n;
    cin>>n;
    int c=0;
while(c<=n){
    f=c*1.8+32;
    cout<< c<<" C  => "<<f<<"F"<<endl;
    c++;
}

}