#include<iostream>
using namespace std;
int main(){
int i  =5;
int &j = i; //i ka naame j bhi hai
 i++;
 j++;
 cout<<i;
 
}