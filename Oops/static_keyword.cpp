#include<iostream>
using namespace std;
class ex{
    // static belong to class and also object
    static int stat;
    // level belong to object;
    int level;
    ex(int level){
        this->level = level;
    }
    //1. static function can only return static variable
    // 2. dont havve this keyword 
    // 3.always accesible without making object;
    static int randome(){
        return stat;
    }
}
int  main(){
    int Hero::stat = 50;
    cout<<Hero::randome();

}