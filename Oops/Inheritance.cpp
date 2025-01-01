#include<iostream>
using namespace std;
class human{
    public:
    int height;
    int weight;
    int age;

    public:
    void setheight(int h){
        this->height = h;
    }
    void setweight(int w){
        this ->weight = w;
    }
    void setAge(int age){
        this->age = age;
    }

};
class male:public human{
    public:
    string gender = "Male";

};
int main(){
    male v;
    v.setweight(55);
    v.setAge(20);
    v.setheight(175);

    cout<< v.weight<<endl;
    cout<<v.age<<endl;
    cout<< v.height<<endl;
    cout<<v.gender<<endl; 
    
}
    