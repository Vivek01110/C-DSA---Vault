#include<iostream>
#include<string>
#define n(s)  size(s)
using namespace std;
void revers(string &s,int i){
    if(i>n(s)-i-1)
        return;
    swap(s[i],s[n(s)-i-1]);
    revers(s,i+1);
    return;
}

    
// void revers(string &s,int i,int j){
//     if(i>=j)
//         return;
//     swap(s[i],s[j]);
//      revers(s,i+1,j-1);
//      return ;
// }
int main(){
    string s = "vivek";
    // cout<<n(s);
    revers(s,0);
    cout<<s;
}