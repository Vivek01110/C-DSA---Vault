#include<iostream>
#include<string>
#include<cstring>
using namespace std;
// in the class there  is by default copy constructor hota hai;
class Hero{
    char *name = NULL;
   int level;
   int health; 
public:
   Hero(){
    name = new char[50];
   }
//    Hero(Hero &temp){
//     strcpy()
//    }
   void setname(char name[]){
    strcpy(this->name,name);
   }
   void setlevel(int level){
    this -> level = level;
   }
   void sethealth(int health){
    this ->health = health;
   }
   void print(){
    cout<<endl;
    cout<<"[Name : "<<name<<" , ";
    cout<<"level : " <<level<<" , ";
    cout<<"Health : "<<health<<" ]"<<endl<<endl;
    cout<<integer in stack ovwr fliw inn the mermory element in the heap buffer iver flow;
   }
};
 
int main(){
    Hero b;
    char name[12] = "vivek kumar";
    b.setname(name);
    b.setlevel(34);
    b.sethealth(90);
    b.print();
   
    Hero s(b);
    s.print();
    s.setlevel(35); 
    b.print();
    s.print();



}