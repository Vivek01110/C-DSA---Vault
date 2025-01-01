#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    // vector me sirf back element insert and delete  kar sakte hai ;
    // front me nahi kar sakte hai ;
    cout<<"capacity -> "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"capacity -> "<<v.capacity()<<endl;
     v.push_back(4);
    cout<<"capacity -> "<<v.capacity()<<endl;
     v.push_back(5);   //vector ne size double kar liya;
    cout<<"capacity -> "<<v.capacity()<<endl;

    cout<<"element at  second index -> "<<v.at(2)<<endl;

    cout<<"front element -> "<<v.front()<<endl;   
    cout<<"back element -> "<<v.back()<<endl;
    cout<<endl;     

//   before pop ;
for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    
// after pop
   v.pop_back();  // last element lo nikal deta hai;
   for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    vector<int> arr(4,2);   //(size of array,number assign to all element);
    // made a new vector 
    vector<int> vect(arr);
    cout<<"vect => ";
    for(int i=0;i<vect.size();i++){
        cout<<vect[i]<<" ";
    }


    //   before clear ;
    for(int i=0;i<v.size();i++){
        cout<<"size =>"<<v.size()<<endl;
        cout<<"capacity =>"<<v.capacity()<<endl;
    }
    cout<<endl;

    
// after clear
   v.clear();  // last element lo nikal deta hai;
     for(int i=0;i<v.size();i++){
        cout<<"size =>"<<v.size()<<endl;
        cout<<"capacity =>"<<v.capacity()<<endl;
    }


}