#include<iostream>
using namespace std;
class A{
    public:
    int num;
    
    void operator+ (A &temp){
        int res = this->num - temp.num;
        cout<<"substraction is : "<<res<<endl;
    }
};
int main(){
    A obj1;
    A obj2;
    obj1.num = 5;
    obj2.num = 3;
    obj1 + obj2; //obj1 operator+ (obj2); 
}