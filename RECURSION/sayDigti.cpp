#include<iostream>
using namespace std;
void saydigit(int n,string s[]){
    if(n==0){
        return;
    }
    int digit = n%10;
    saydigit(n/10,s);
    cout<<s[digit]<<" ";
    
}
int main(){
    string arr[10]  = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int n;
    cin>>n;
    saydigit(n,arr);
}