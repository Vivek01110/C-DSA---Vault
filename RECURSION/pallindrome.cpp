#include<iostream>
using namespace std;
#define n(s) size(s)
bool pallindrom(string s,int i){
    if(s[i]!=s[n(s)-1-i])
        return false;
    if(i>n(s)-1-i)
        return true;
    
    return pallindrom(s,i+1);
    
}

int main(){
    int n;
    string s = "niayain";
   cout<< pallindrom(s,0);  
    
} 