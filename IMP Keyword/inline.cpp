#include<iostream>
using namespace std;
inline int getMax(int &a,int &b){
    return a>b ? a : b;
}
int main (){
    int a =2 ,b =3;
    int ans = getMax(a,b);  //before compile getmax(a,b) ki jagah a>b ? a : b; aa gaya;
    //function call nahi hua ;
    cout<<ans;
   return 0;
}