#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;


int main(){
    
    unordered_map<string ,int>mp;
    
    //insert
    // 1.
    pair<string ,int> p = make_pair("name" , 2);

    mp.insert(p);

//  2
    pair<string ,int> q("kutte" , 2);
    mp.insert(q);

// 3
   
   mp["cat"] = 5;

//    access

    cout <<"cat"<<" "<< mp["cat"] << endl;
    cout << mp.at("cat");

    // not initilized
    cout << mp.at("unknown key"); // give out of index error:
    cout << mp["unknown key"]; // by default initialized with val = 0 with key; it will print 0;
   

   mp.erase("unknown key"); //erase the slot

   mp.size();
// traversal
   
   for(auto it : mp ){
     cout << it.first << " " << it.second  << endl;
   }
   unordered_map<string, int> :: iterator it = mp.begin();

   while(it != mp.end()){
     cout << it -> first << " " << it -> second << endl;
     it ++;
   }


}