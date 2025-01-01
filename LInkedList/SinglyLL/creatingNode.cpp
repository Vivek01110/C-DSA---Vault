#include<iostream>
using namespace std;
class node {
    public:
    int data;
    node * next;

    // Constructor
    node(int data){
        this->data = data;
        this->next  = NULL;
    }
    // Destructer
    ~node(){
       int value = this ->data;
       if(this->next != NULL){
            delete next;
        this ->next = NULL;
       }
        cout<< "memory free for "<<value <<endl;
    }
};

// insertion at HEAD
void insertAtHead(node* &head,int d){
    node *temp = new node(d);
    temp ->next = head;
    head  = temp;   //head pointer store the adreess of  temp;
}

// INsertion at last
void insertAtTail(node* &tail,int d){
    node*temp = new node(d);
    tail ->next = temp;
    // tail = tail->next;/
    tail = temp;
}

// insert at position 
void insertAtpos(node* &head,int pos ,int d){
    if(pos==1){
      insertAtHead(head,d);
      return;
    }
    node* temp = head;
    int cnt = 1;
    while(cnt<pos-1){
        temp = temp->next;
        cnt++;
    }
    node* nodeToInsert = new node(d);
    nodeToInsert->next = temp ->next;
    temp -> next  = nodeToInsert;
}

// print linked list
void print(node* &head){
    node *temp  = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

// Delete node at pos
void deletenode(node * &head,int pos){
    node*curr = head;
    if(pos == 1){
        head = head -> next;
        curr ->next = NULL;
        delete curr;
        return;
    }
    node* prev = NULL;
    int cnt = 1;
    while(cnt<pos){
        cnt++;
        prev = curr;
        curr = curr->next;
        
    }
    prev->next = curr -> next;
    curr -> next = NULL;
    delete curr;
}

int main(){
    node * head = new node(10);
    node*tail = head;
    // node* tail = new node(20);
    // head ->next = tail;
    insertAtHead(head,30);
    insertAtHead(head,40);

    insertAtpos(head,3,45);

    insertAtTail(tail,50);
    insertAtTail(tail,70);
    insertAtTail(tail,80);
    print(head);

    deletenode(head,1);
     print(head);

    deletenode(head,3);
     print(head);
}