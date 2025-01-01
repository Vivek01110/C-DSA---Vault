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
node * removeDuplicates( node *head) {
        if(head == NULL) return head;

        node*slow = head;

        
        while(slow != NULL && slow -> next != NULL){
            node*fast = slow;
            while(fast -> next != NULL){
                if(slow -> data == fast ->next -> data){
                    node* temp = fast -> next;
                    fast -> next = temp ->next;
                    delete temp;
                }
                else{
                    fast = fast -> next;
                }
            }
            slow = slow -> next;
        }
        return head;    
    }

void insertAthead(node* &head,int d){
    node *temp = new node(d);
    temp ->next = head;
    head  = temp;   //head pointer store the adreess of  temp;
}

void print(node* &head){
    node *temp  = head;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
   node*head = new node(4);
   insertAthead(head,2);
   insertAthead(head,2);
   insertAthead(head,5);
//    insertAthead(head,7);
//    insertAthead(head,5);
//    insertAthead(head,6);
//    insertAthead(head,6);
//    insertAthead(head,2);
//    insertAthead(head,1);
   print(head);
   removeDuplicates(head);
   print(head);
} 