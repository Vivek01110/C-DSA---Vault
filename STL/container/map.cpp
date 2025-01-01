#include<iostream>
#include<map>

using namespace std;
int main(){
    map<int,string> m;

    m[1]="one_Vivek";
    m[2]="Two_Vivek";
    m[5]="five_Vivek";
    m[7]="six_Vivek";
//   insert akr skate hein
 m.insert({4,"Four_Vivek"});  //curly braces 

    cout<<m[1]<<endl;
 
 cout<<"before erase"<<endl;
    for(auto i:m)
     cout<<i.first<<" "<<i.second<<endl;  //first => key    second => value;
    cout<<endl;

     m.erase(7);
 cout<<"after erase"<<endl;
    for(auto i:m)
     cout<<i.first<<" "<<i.second<<endl;

    
    


    






}