#include<iostream>
#include<deque>

using namespace std;
int main(){
    deque<int> d;
    //front and  back me element insert  or delele kar sakte hai;
    d.push_back(2); 
    d.push_front(13);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"print 1st index -> "<<d.at(1)<<endl;
    cout<<"empty or  not : "<<d.empty();
// before erase :
    cout<<"size of deque : "<<d.size()<<endl;

// after arase :
  d.erase(d.begin(),d.begin()+1);
   cout<<"size of deque : "<<d.size()<<endl;
}