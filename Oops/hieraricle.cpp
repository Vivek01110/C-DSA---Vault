#include<iostream>
using namespace std;
class Hero{
    public:
    int height;
    int weight: 
};
class Male:public Hero{
    public:
    string  skill;
};
class Female:public Hero{
    public:
    string looks;
}
int main(){
    Male m1;
    m1.height = 23;
    m1.weight  = 70;
    Female f1;
    f1.weight = 70;
    f1.height = 175;
    
}