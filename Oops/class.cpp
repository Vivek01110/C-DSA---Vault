#include<iostream>
using namespace std;
class hero {
    public : 
   float health;
    float price;
    char level;
};

int main(){
    hero vivek;
    vivek.level = 'H';
    vivek.health = 34.78;
    vivek.price = 35.8;
    cout<<"health is : "<<vivek.health<<endl;  //by default its  ]private
    cout<<"level is  : "<<vivek.level<<endl;
    cout<<"size  is : "<<sizeof(vivek);
}