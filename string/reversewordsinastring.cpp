#include<iostream>
#include<string>
using namespace std;
string reverseword(string s){
           int n=s.size();
          
           int i=0;
           int left=0;
           int right=0; 
           reverse(s.begin(),s.end());
           while(i<n){
            while(i<n && s[i]==' ')
            i++;
            if(i==n)break;
            while(i<n && s[i]!=' '){
                s[right++]=s[i++];
            }
            reverse(s.begin()+left,s.begin()+right);
            s[right++]=' ';
            left=right;
            i++;  // current i will be on space;
           }
          s.resize(right-1);
           return s;
    }


int main(){
    string s="the sky is blue";
    
    reverseword(s);
    cout<<s;
}





























// updated ||
// Aproach :- reverse string,store word in temp string, reverse temp,after loop revrerse main string

// void reverse(string s ){
//         int i=0;
//         int j=s.size()-1;
//         while(i<j){
//             swap(s[i++],s[j--]);
//         }
//   }
//     string reverseWords(string s) {
//          int i=0; //to traverse in string ;
//     int m=0; //to feed reverse word from temp in s; 
//     int j=0;//
//     while(s[i]!='\0'){
        
//         // feeding into temp from s to de reverse word; 
//         int k=0;
//      string temp="";
//         while(s[i]!=' ' || s[i]!='\0'){
//             temp[k++]=s[i++];
//         }
//         reverse(temp);
//         j=0;
//         while(temp[j]='\0'){
//             s[m++]=temp[j++];
//         }
//         m++;
//     }
//     reverse(s);
    
//         return s;
        
//     }
// };

















// // reverse word;
// void reverseWord(char s[]){
//     int n=size(s);
//     reverse(s,0,n-1);
   
//     int k=0;
//     int size=0;
//     int j=0;
//     while(s[j]!='\0'){ 
//         j=0;
//     while(s[j]!=' ' || s[j]!='\0'){
//          size++;
//          j++;
//     }
//     char temp[size];
//         while(s[j]!=' '  || s[j]!='\0'){
//               temp[j++]=s[k++];
//         }
//         reverse(temp,k-size-1,size-1);
//         size=0;
//          while(s[j]!=' '  || s[j]!='\0'){
//               temp[j++]=s[k++];
//         } 
          
//     }
// }
// int main(){
//      char s[]="The sky is blue";
//      reverseWord(s);
//      cout<<s;
// }

