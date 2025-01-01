#include<iostream>
#include<map>
using namespace std;
int minimum(string s , string k){
    std::map<int , int> map;

    for(int i=0;i<s.size();i++){
        int diff = 0;
        for(int j=0;j<k.size();j++){
            if(s[i] != k[j]) diff++;
        }
        map[i] = diff;
    }

    int mini = INT_MAX;

    for(int i=0;i<s.size();i++){
        if(mini > map[i]){
            mini = map[i];
        }
    }
    return mini;
}
       
int main(){
    int t;
    cin >> t;

    while(t--){
        int n , m;

        cin >> n >> m;

        string s(n,'0');

        for(int i=0; i<n;i++){
            cin>> s[i];
        }

        string k(m,'0');

        for(int i=0;i<m;i++){
            cin >> k[i];
        }

        cout << minimum(s,k)<<"\n";
    }
}