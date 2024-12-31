#include<iostream>
#include<string>
using namespace std;
int main (){
    char str[20];
    // cin.getline(str,20);     by deault it will stop when newline charactore comes;
    cin.getline(str,20,'$');  //it will stop taking input when '!' will be given;
    cout<<str;  //will not printed after $ sign;
}