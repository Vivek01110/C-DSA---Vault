#include<iostream>
#include<string>
using namespace std;
//Q.Do it without  using an extra string;
string replacedstr(string s){
   string temp ="";
   for(int i=0;i<s.length() ;i++){
    if(s[i]==' '){
        temp.push_back('@');
        temp.push_back('4');
        temp.push_back('0');
    }
    else{
     temp.push_back(s[i]);
    }
   }
   return temp;
 }

 int main(){
    string s="my NAME IS VIVEK";
   cout<< replacedstr(s)<<" ";
 }