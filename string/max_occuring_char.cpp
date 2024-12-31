#include<iostream>
using namespace std;
 char maxoccur(string str){
    int arr[26]={0};

    //to store occurence of all letter in string a to z
    // a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z ;
    // 0  1  2  3  4  5  6  7  8  9  10 11 12 ..... index of
    // 0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0 ; occurence of letters;  

    // storing occurence of letter of str in arr;
    for(int i=0;i<str.length() ; i++){
        int number=0;
        number = str[i] -'a';
        arr[number]++;
      }
    
    
    int max = arr[0];
    int index = 0;
    // find max element in arr;
    for(int i=0; i<26 ;i++){
        if(max<arr[i]){
            max=arr[i];
            index=i;
        }
    }
    return 'a'+index;
 }

int main(){
    char str[]="vivek";
    cout<<maxoccur(str);
}






































// char maxoccur(char str[]){
//     int i=0;
//     int max=0; 
//     char maxchar=str[0];
//     while(str[i]='\0'){
//         int count=0;
       
//         int j=i+1;
//         while(str[j]='\0'){
//             if(str[j]==str[i]){
//                 count++;
//             }
//             if(max<count){
//                 max=count;
//                 maxchar=str[i];
//             }
//                j++;
//         }
//         i++;
//     }
//     return maxchar;
// }