#include<iostream>
using namespace std;
class Human{
    public:
    int health;
    int level;
    void sethealth(int health){
        this->health=health;
    }
    void setlevel(int level){
        this->level=level;
    }
};
class child:public Human{
    int age;
};
int main(){
    child ch1;
    ch1.sethealth(23);
    ch1.setlevel(45);
    cout<<"health : "<<ch1.health<<endl;
    cout<<"level : "ch1.level<<endl;
    cout<<hinid in hidni  
}
