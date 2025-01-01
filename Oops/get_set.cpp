#include<iostream>
using namespace std;
class  hero{
    private:
    int health = 34;
    public:
    int price;
    int gethealth(){
        return health;
    }
    void sethealth(int h){
        health = h;
    }

};
int main(){ 
    hero h;
    
    cout<<"health is : "<<h.gethealth()<<endl;
    h.sethealth(65); 
    cout<<"health is changed to  : "<<h.gethealth()<<endl;

}