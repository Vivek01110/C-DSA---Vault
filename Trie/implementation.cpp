#include<iostream>
#include<array>
using namespace std;

class TrieNode{
   public:
   char data;
   TrieNode* arr[26];
   bool isTerminal;

   TrieNode(char data){
      this -> data = data;
      this ->  isTerminal = false;

      for(int i =0; i<26;i++){
          this -> arr[i] = NULL;
        }
    }
};
class Trie{
    public:

    void add_word(TrieNode* root , string word){
      for(int  i = 0;i< word.size();i++){
        char ch = word[i];
          if(root == NULL){
             root = new TrieNode(ch);
            if(i==word.size() -1)  root -> isTerminal = true;
          }
          else{
                 if(root -> arr[ch - 'a'] == NULL)
                     root -> arr[ch - 'a'] = new TrieNode(ch);
                     if(i==word.size() -1) root -> arr[ch - 'a'] -> isTerminal = true;
                 root = root -> arr[ch - 'a'];
               }   
          }
      }
   
};

int main(){
    
}