#include<iostream>
#include<set>

using namespace std;
int main(){
    set<int> s;

    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(3);
    s.insert(1);
    s.insert(1);
    s.insert(7);
    s.insert(6);
    s.insert(5);
    s.insert(3);

  cout<<"element in set";
   for( auto i:s)
     cout<<i<<" ";
     cout<<endl;
     s.erase(s.begin());

//    for( int i:s)
//      cout<<i<<endl;


}