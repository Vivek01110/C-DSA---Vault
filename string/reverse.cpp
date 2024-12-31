#include<iostream>
using namespace std;
int length(char str[]){
    int count=0;
    int i=0;
    while(str[i++]!='\0'){ //i++ karna bhul gaya heeeehe;
        count++;
        
    }
    return count;
}
void reverse(char str[] ,int n){
    int i=0;
    int j=n-1;
    while(i<j){
        swap(str[i++],str[j--]);
    }
}
int main(){
    char str[20];
    cout<<"enter your name  : ";
    cin>>str;
    cout<<"your name  : "<<str<<endl;
    int n=length(str);
    reverse(str,n);
    cout<<"reverse name : "<<str<<endl;
    
}