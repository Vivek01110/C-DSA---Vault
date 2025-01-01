#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int data){
        this ->data = data;
        this ->next = NULL;
    }
    ~node(){
        int val = this ->data;
        if(next != NULL){
            delete next;
            this ->next = NULL;
        }
        cout<<"memory free for : "<<val<<endl;
    }
};
void insertnode(node*&tail,int element ,int data){
    node* temp = new node(data);
    if(tail == NULL){
        tail = temp;
        temp -> next = temp;
    }
    node*curr = tail;
    temp ->next = curr -> next;
    curr ->next = temp; 
}

void print(node*tail){
    node*temp = tail;
    do{
        cout<<tail->data <<" ";
        tail = tail -> next;

    } while(tail != temp); 
    cout<<endl;
}
void deletenode(node*&tail,int element){
    if(tail == NULL){
        cout<<"List is empty "<<endl;
        return;
    }
    node*prev = NULL;
    node*curr = tail;
    while(curr ->data != element){
         curr = curr -> next;
         prev = curr;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete(curr);

}
int  main (){
    node*tail = new node(20);
    insertnode(tail,20,40);
    insertnode(tail,40,45);
    insertnode(tail,45,50);
    insertnode(tail,50,55);
    insertnode(tail,55,60);
    print(tail);
    cout<<"sab sahi hai";
    // print(tail);
   

}



























// #include<iostream>
// using namespace std;
// class  node{
//     public:
//     int data;
//     node * next;

//     node(int d){
//         this -> data = d;
//         this ->next = NULL;
//     }
//     ~node(){
//         int val = this ->data;
//         if(this ->next != NULL){
//             delete next;
//             this -> next != NULL;
//         }
//     }
// };
// void insertnode(node*&tail ,int element,int data){
//     node* temp = new node(data);
//     if(tail == NULL){
//         tail = temp;
//         temp -> next = tail;
//     }
//     else{
//         node*curr = tail;
//         while(curr ->data != element)
//             curr = curr -> next;
    
//         temp ->next = curr -> next;
//         curr ->next = temp;
//     }
// }
// void print(node*tail){
//     node*temp = tail;
//     do{
//         cout<<tail -> data<<" ";
//         tail = tail -> next;
//     } while(tail != temp);
//     cout<< endl;
// }
// int main(){
//     node *tail = new node(20);
//     insertnode(tail,20,30);
//     insertnode(tail,30,34);
//     insertnode(tail,34,60);
//     // print(tail);
//     insertnode(tail,34,100);
//     print(tail);
//     print(tail);
    
// }