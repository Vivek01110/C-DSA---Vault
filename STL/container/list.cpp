#include<iostream>
#include<list>

using  namespace std;
int main(){
    list<int> l;
    // to copy a list
    list<int> n(l);
    list<int> nl(5,100);
    l.push_back(4);
    l.push_front(3);
    cout<< "list ";
    for( int i:l)
    cout<<i<<" ";
    cout<<endl;
    
  l.erase(l.begin());  //ek ek element delete kar deta  hai ;
  cout<<"after erase";
   for( int i:l)
    cout<<i<<" ";
    cout<<endl;

           

}
