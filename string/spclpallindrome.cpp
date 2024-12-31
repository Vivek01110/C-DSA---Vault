#include<iostream>
using namespace std;

int length(char str[]){
    int count=0;
    int i=0;
    while(str[i++]!='\0'){
        count++;
        
    }
    return count;
}

char toLowerCase(char str){
        if(str>='a' && str<='z'){
            return str;
        }
        
        else {
            return str-'A'+'a';
        }
    }
    // char tochar(int n){
    //       return n+'0';
    
bool pallindrome(char str[]){
    int i=0;
   int  j=length(str)-1;
    while(i<=j){
         while(str[i]>=' ' && str[i]<='@'){
               i++;
            }
             while(str[j]>=' ' && str[j]<='@'){
               j--;
            }
        if(toLowerCase(str[i])!=toLowerCase(str[j])){
            return 0;
        }
        else {
            i++;
            j--;
        }
    }
    return 1;
    }
int main(){
        char str[]="c2 O$d@eeD o1c";
       cout<< pallindrome(str);



}