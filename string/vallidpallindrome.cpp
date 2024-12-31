#include<iostream>
#include<string>
using namespace std;

 bool valid(char ch){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
            return 1;
        }
        return 0;
    }

char toLowerCase(char ch){
        if((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
            return ch; 
        else{
            char temp =ch-'A'+'a';
            return temp;
        }
}
 bool isPalindrome(string s) {
     int i=0;
     int j=s.size()-1;
     while(i<j){
        if(!valid(s[i]))
        i++;
        if(!valid(s[j]))
        j--;
        if(toLowerCase(s[i]) != toLowerCase(s[j])){
            return 0;
        }
        else{
            i++;
            j--;
        }
     }
     return 1;
        }

int main(){
    string str="A man, a plan, a canal: Panama";
   cout<<isPalindrome(str);
    
}





// class Solution {
// public:
//     bool valid(char ch){
//         if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
//             return 1;
//         }
//         return 0;
//     }
//     char toLowerCase(char ch){
//         if((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
//             return ch; 
//         else{
//             char temp =ch-'A'+'a';
//             return temp;
//         }
        
//     }
//     bool isPalindrome(string s) {
//         string temp = "";
//         for(int i=0 ; i<s.length() ; i++){
//             if(valid(s[i])){
//               temp.push_back(s[i]);
//             }  
//         }
//         for (int i=0 ;i<temp.length(); i++){
//             temp[i]=toLowerCase(temp[i]);
//         }
//         int i=0;
//         int j=temp.length()-1;
//         while(i<=j){
//             if(s[i]!=s[j]){
//                 return 0;
//             }
//             else{
//             i++;
//             j--;
//             }
//         }
//         return 1;
//         }
// };