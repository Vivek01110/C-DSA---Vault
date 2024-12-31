#include<iostream>
using namespace std;
int main(){
    char ch;
   ch=cin.get();
    if(ch<='z' && ch>='a')
    cout<< "this the lower case"<<endl;
    else if(ch<='Z' && ch>='A')
    cout<< "this is the upper case"<<endl;
    else cout<<"this is the numeric"<<endl;
}