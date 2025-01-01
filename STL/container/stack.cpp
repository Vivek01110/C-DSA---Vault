#include<iostream>
#include<stack>

using namespace std;
int main(){
   stack<string> s;

   s.push("love");
   s.push("babbar");
   s.push(" vivek");
    
cout<<"Top Element : "<<s.top()<<endl;

 s.pop(); 
//last(top) element remove kar deta  hai ;
  cout<<"Top Element --> "<<s.top()<<endl;
  cout<<"size of stack : "<<s.size()<<endl;
  cout<<"empty or not : "<<s.empty()<<endl;
  
}
