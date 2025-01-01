#include<iostream>
using namespace std;
class Human{
    public:
  void  speak(){
        cout<<"speaking..."<<endl;
    }
};
class Dog:public Human{
    public:
   void speak(){
        cout<<"barking..."<<endl;
   }
};
int main(){
    Dog doggy;
    doggy.speak();
}