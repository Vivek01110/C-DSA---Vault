#include<iostream>
#include<string>
using namespace std;
 string removal(string s){
            
            int i=0;
            while(i<s.length()){
                if(s[i]==s[i+1]){
                    s.erase(s.begin()+i,s.begin()+i+2);
                   if(i>0) i-=2;
                   else i--;
                  
                }
                    i++;
            }
        return s;
    }
int main(){
    string s;
    cout<<removal(s);
}







// if in between loop i at 0 index then i will not increment in case of diffrent adjecent element;

// int i=0;
//             while(i<s.length()){
//                 if(s[i]==s[i+1]){
//                     s.erase(s.begin()+i,s.begin()+i+2);
//                    if(i>0) i--; 
//                 }
//                 else{
//                     i++;
//                 }
//             }