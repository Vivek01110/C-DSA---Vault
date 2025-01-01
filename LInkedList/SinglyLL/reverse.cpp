#include<iostream>
using namespace std;
class node {
    public:
    int data;
    node * next;

    node(int data){
        this->data = data;
        this->next  = NULL;
    }
};

void reverse(node*&head){
    node*curr = head;
    node*prev = NULL;
    node*forward = NULL;
    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
}

node* recreverse(node*&head){
    if(head ==NULL) return head;
    // head is at last node;
    if( head->next ==NULL)
        return head;
    // store the reversehead
    node*chotahead = recreverse(head ->next);
    // here head is second last  node ;
    head ->next ->next = head;
    head ->next =NULL;
    return chotahead;
}

void print(node*&head){
    node*temp  = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void insertAtHead(node* &head,int d){
    node *temp = new node(d);
    temp ->next = head;
    head  = temp;   //head pointer store the adreess of  temp;   
}

int main(){
    node*head = new node(5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    // insertAtHead(head,60);
    // insertAtHead(head,70);
    reverse(head);
    print(head);
}