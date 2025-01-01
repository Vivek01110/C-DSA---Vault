#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
   vector<int> v;
   
   v.push_back(3);
   v.push_back(4);
   v.push_back(5);
   v.push_back(8);
   v.push_back(9);
   v.push_back(10);
 
  cout<<binary_search(v.begin(),v.end(),8)<<endl;

  int a = 3;
  int b = 4;
  cout<<"max element"<<endl;
  cout<<max(a,b)<<endl;

   cout<<"min element"<<endl;
  cout<<min(a,b)<<endl;

  cout<<"swap element"<<endl;
   string str="vivek";
   reverse(str.begin(),str.end());
   cout<<"string"<<str<<endl;
  cout<<"before rotate"<<endl;
  for(int i:v)
   cout<<i<<" ";
   cout<<endl;
   rotate(v.begin(),v.begin()+1,v.end());
   cout<<"after rotate"<<endl;
   for(int i:v)
   cout<<i<<" ";
   cout<<endl;
  


  


  


  


}