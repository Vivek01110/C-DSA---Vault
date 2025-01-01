#include<iostream>
using namespace std;
class student{
    public:
    int level;
    int health;
  void setlevel(){
    this->level = level;
  }
  void sethealth(){
    this->health = health;
  }
  int getlevel(){
    return this->level;
  }
  int gethealth(){
    return this->health;
  }
  public:
  ~student(){
    cout<<"destructor called ";
  }
};
int main(){
    cout<<"for static automaticaly "<<endl;
   student ramkrishan;
    cout<<"for dynamic allocation"<<endl;  //we have to manually called;
   student *ram = new student;
   delete ram;
}