#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter first number a = ";
    cin>>a;
    int b;
    cout<<"enter second number b = ";
    cin>>b;
    cout<<"operation is ";
   char ch;
   cin>>ch;
    switch(ch){
        case '+': cout<<"sum is = " << a+b <<endl;
        break;
        case '*' :cout<<"multiplication is " << a*b <<endl;
        break;
        case '/' :cout <<"division is " << a/b <<endl;
        break;
        case '-' :cout<<"substraction = "<<a-b <<endl;
        break;
        case '%' :cout <<"remainder = " <<a%b<<endl;
        break;
        default :cout<< "it is not applicable in this calculator";

    }
}
