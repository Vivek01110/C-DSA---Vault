// Problem 2 : 242. Valid Anagram

// Approach : 

// 1. Make two vector of 26 size to store frequency of letters of string s and t.
// 2. If both vector are equal then string t is permuted string of s,
// 3. Else both are the different string.


// Code :

#include<iostream>
#include<vector>
#include<string>
using namespace std;
    bool isAnagram(string s, string t) {
       vector<int>scount(26,0);
       vector<int>tcount(26,0);
        for(int i = 0;i<s.size();i++)
            scount[s[i]-'a']++;

        for(int i=0 ;i<t.size();i++)
            tcount[t[i]-'a']++;
        
        // compare the both freq arrays
        for(int i = 0;i<26;i++){
             if(scount[i] !=tcount[i])
                return false;
        }
        return true;
    }



