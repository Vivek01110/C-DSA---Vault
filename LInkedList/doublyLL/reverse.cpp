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
node* reverse(node*head){
    // head is AT last node;
    if(head ==NULL || head -> next == NULL)
        return head;
    // store reverse head;
    node* chotahead = reverse(head ->next);
    // here head is the second last node;
    // draw the scenario of second last node and visulize it;
    head ->next ->next = head;
    head ->next ->prev = NULL;
    head ->prev = head ->next;
    head ->next = NULL;
    return chotahead; 
 }
int main(){
    node* head = new node(10);
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);
    insertAtHead(head,50);
    insertAtHead(head,60);
    insertAtHead(head,70);
    insertAtHead(head,80);
    print(head);
    node* reversehead = reverse(head);
    print(reversehead);
}