#include<iostream>
using namespace std;
class hero {
    public:
    int level;
    char ch;
    // parametrised constructor

    // sbse pahle constructor call hota hai;
    // first  comstructor
    hero(){
        cout<<"first constructor called "<<endl;
    }
    // second constructor
    hero(int level){
        this->level = level;
        cout<<"second constructor called "<<endl;  // object ka level = constructor level
    }
    // third constructor;
    hero(char ch,int level){
        this -> level = level;
        this -> ch = ch;
        cout<<"third constructor called "<<endl;
    }
    // copy constructor 
    hero(hero& temp){
        this ->level = temp.level;
        this ->ch = temp.ch;
    }
    
};
int main(){
    hero *h = new hero;    //first constructor called
    hero p(50);  //second constructor called
    hero c('H',30);  //third constructor called

}