#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this -> data = data;

        this -> left = NULL;
        this -> right = NULL;

    }   
};

void levelorderBuild(Node *&root){
    queue<Node*>q;
    int data;
    cout<< "enter the root Node : ";
    if(data == -1) return;
    
    cin>> data;

   root  = new  Node(data);
    q.push(root);

    while(!q.empty()){
       Node* temp = q.front();
       q.pop();

    cout<< " Enter the left of "<<temp -> data<<" : ";
       int templeft;
       cin>> templeft;

    if(templeft != -1){
        temp -> left = new Node(templeft);
        q.push(temp -> left);
    }

    cout<< "Enter the right  of "<<temp -> data<< " : ";
       int tempright;
       cin>> tempright;

       if(tempright != -1){
            temp -> right = new Node(tempright);
            q.push(temp -> right);
       }
    }
}

void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
        cout<< temp -> data<<" ";
          if(temp -> left != NULL){
            q.push(temp -> left );
          }

         if(temp ->right != NULL){
            q.push(temp -> right);
        }     
        } 
    }
}

int main(){
    Node* root = NULL;

     levelorderBuild(root);

    levelOrderTraversal(root);
}