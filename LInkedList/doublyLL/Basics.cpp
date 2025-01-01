#include<iostream>
using namespace std;
class  node{
    public:
    int data;
    node* prev;
    node* next;

    // Constructor
    node(int data){
        this->data = data;
        this ->prev = NULL;
        this -> next = NULL;
    }
    ~node(){
        int val = this ->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free for : "<<val<<endl;
    }
};
void print(node *&head){
    node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int length(node*&head){
    if(head = NULL) return 0;
    node *temp = head;
    int cnt = 1;
    while(temp != NULL){
        temp = temp->next;
        cnt++;
    }
    return cnt;

}
void insertAtHead(node*&head,int d){
     node *temp = new node(d);
     temp->next  = head;
     head->prev = temp;
     head = temp;
}
void insertionAtLast(node*&tail,int d){
    node * temp = new node(d);
    tail->next  = temp;
    temp ->prev = tail;
    tail = temp;
}
void insertAtPosition(node*&head,int position,int d){
    
    if(position == 1)
        insertAtHead(head,d);

    node* newnode = new node(d);
    node *temp = head;
    int cnt = 1;
    while(cnt <position-1){
        cnt++;
        temp = temp -> next;  
    }
   
    newnode -> next  = temp -> next;
    (temp ->next)->prev = newnode;
    temp ->next = newnode;
    newnode->prev  = temp;
    // node *newnode = new node(d);
}

void deletehead(node*&head){
    node *temp = head;
    head = head->next;
    temp -> next ->prev = NULL;
    temp ->next  = NULL; //head->prev = NULL
    delete(temp);
}

void deletenode(node*&head,int position){
     if(head ==NULL){
        cout<<"invalid deletion"<<endl;
        return;
     }
    else if(position == 1){
        deletehead(head);
        return;
    }
    int cnt = 1;
    node *temp = head;
    while(cnt<position){
        temp = temp ->next;
        cnt++;
    }
    if(position == length(head)){
         temp ->prev ->next = NULL;
         temp ->next = NULL;
         delete(temp);
         return;
    }
    else{
        temp -> prev ->next = temp ->next;
        temp ->next ->prev = temp ->prev;
        temp ->next = NULL;
        temp ->prev = NULL;
        delete(temp);
    }

     
}



int main(){
    node *head  = new node(10);
    node *tail =head;
     print(head);
    insertAtHead(head,20);
     print(head);
    insertAtHead(head,30);
     print(head);
    insertAtHead(head,40);
    print(head);
    insertionAtLast(tail,50);
    print(head);
    insertAtPosition(head,3,35);
    print(head);

    deletenode(head,1);
    print(head);

}