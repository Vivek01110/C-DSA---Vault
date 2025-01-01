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

 Node* BuildTree(Node* root){
  
    int d;
  
    cout<<"enter the val of node : ";
    cin>> d;
    root = new Node(d);
    if(d == -1){
            return NULL;
        }
    cout<<endl<< "insert in the left of : "<< root -> data<< endl;
    root -> left = BuildTree(root -> left);
        cout<<endl<< "insert in the right of : "<< root -> data<< endl;
    root -> right = BuildTree(root -> right);

    return root; 
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

    Node* root = new Node(10);
    root = BuildTree(root);
    // 1 2 4 8 -1 9 -1 5 10 -1 11 -1 3 6 12 -1 13 -1 7 14 -1 15 -1

    levelOrderTraversal(root);


}