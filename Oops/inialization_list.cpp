#include<iostream>
using namespace std;
class ex{
    int level;
    int health;
    char name;
    // constructor
    public:
    ex(int level,int health,char name): level(level),health(health),name('M')
    {
        cout<<"variable are initialize";
    }
    int getlevel(){
        return this->level;
    }
    int gethealth(){
        return this->health;
    }
    char getname(){
        return this->name;
    }
    void print(){
        cout<<"level : "<<this->level<<endl;
        cout<<"health : "<<this->health<<endl;
        cout<<"name : "<<this ->name<<endl;
    }
};
int main(){
  ex hero(24,34,'M');
  hero.print();
  
}


// Constructorname(datatype value1, datatype value2):datamember(value1),datamember(value2)
// {
//     ...
// }