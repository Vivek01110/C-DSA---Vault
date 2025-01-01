#include<iostream>
using namespace std;
class student{
    public : 
    int level;
    float health;
};
int main(){
    student *s = new student;
    s->health = 30;
    s->level = 34.45;
    cout<<"student level : "<<(*s).level<<endl;
    cout<<"student health : "<<(*s).health<<endl;

    cout<<"student level : "<<s->level<<endl;
    cout<<"student health : "<<s->health<<endl;

}