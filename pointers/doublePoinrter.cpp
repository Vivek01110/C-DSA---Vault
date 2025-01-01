#include<iostream>
using namespace std;
// int main(){
//     int i = 5;
//     int *ptr = &i;
//     int**ptr2 = &ptr;
//     cout<<"All will print same value"<<endl;
//     cout<<i<<endl;
//     cout<<*ptr<<endl;
//     cout<<**ptr2<<endl;
// }
void update(int **p){
    p = p  + 1;
    *p = *p + 1;
    **p = **p + 1;
    return;


}
int main(){
    int i= 5;
    int *p = &i;
    int **p2 = &p;
    
    update(p2);
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;
    
}
