// permuted of s1 is substring of s2;
// wrong answer !!
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
 bool Ispermuted(string s1,string s2){
     sort(s1.begin(),s1.end());
     sort(s2.begin(),s2.end());
    if(s2.find(s1)!=-1){
            return 1;
        }
    else{
        return 0;
    }
     }
int main(){
    string s2 ="eidboaoo";
    string s1 ="ab";
    cout<<Ispermuted(s1,s2);   
}