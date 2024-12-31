#include<iostream>
using namespace std;
int main(){
    int num=1;
    
    switch(num){
        case 1: cout<<"enter a number" <<endl;
        break;
        
        case 2: cout <<"do not enter the number" <<endl;
        break ;

        case 3 : cout<<"AI is dangerous";
        break;

        default : cout <<"it is the default";
        break;
    }
}