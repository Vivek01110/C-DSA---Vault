#include<iostream>
#include<stack>
using namespace std;
int main (){
    stack<int> st;
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    
    st.pop();


    cout<< st.top()<<endl;

    if(st.empty()){
        cout<< "stack is empty ";
    }
    else {
         cout<< "stack is not empty";
    }
    



}