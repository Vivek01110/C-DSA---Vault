#include<iostream>
#include<string>
using namespace std;

 // is both  string's array same;
 bool IsTwoarrSame(int arr[],int brr[]){
    for (int i=0;i<26 ;i++){
        if(arr[i]!=brr[i]){
            return 0;
        }
    }
    return 1;
 }
bool IsPermutation(string s,string ps){
    int arr[26]={0};
    int number=0;
    for(int i=0;i<s.length();i++){
         number=s[i]-'a';   //index of letter in count arr;
        arr[number]++;
    }

    // for second string to check is it  permutation string ;
    int brr[26]={0};
    for(int i=0;i<ps.length();i++){
        number=ps[i]-'a';   //index of letter in count arr;
        brr[number]++;
    }
    return IsTwoarrSame(arr,brr);
}
int main(){
    string s ="vivek";
    string ps ="eiv";
    if(IsPermutation(s,ps))
        cout<<"string is permutated";
    else
        cout<<"string is not permutated";
    
}