#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    int weight;
   void bark(){
    cout<<"barking"<<endl;
   }
};
class Human{
    public:
     void speak(){
        cout<<"speaking"<<endl;
    }
};
class hybrid:public Human,public Animal{
    
};
int main(){
    hybrid h;
    h.speak();
    h.bark();
   
}
    
