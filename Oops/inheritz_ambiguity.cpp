#include<iostream>
using namespace std;
class A{
    public:
    void abc(){
        cout<<"i am in A"<<endl;
    }
};

class B{
    public:
    void abc(){
        cout<<"i am in B"<<endl;
    }
};
class C:public A,public B{

};
int main(){
    C obj1;
    // obj1.abc();   // here is ambiquity that which class's function will be called;
    obj1.A::abc();
    obj1.B::abc();
}