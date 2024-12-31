#include<iostream>
using namespace std;
void Isprime(int n){
    bool flag=true;
    for(int i=2; i<n;i++){
        if(n%i==0)
        flag=false;  
    }
    if(flag==true)
    cout << "prime number " <<endl;
    else
    cout << "non prime number " << endl;
    return;
}
int main(){
    int n;
    cout << "enter the  number ";
    cin  >> n;
    Isprime(n);
}