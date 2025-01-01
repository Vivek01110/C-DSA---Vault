#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;

    Node(int data){
        this -> data = data;

        this ->  left = NULL;
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


void inorder(Node* root){
    if(root == NULL) return;

    inorder(root -> left);
    cout << root -> data <<" ";
    inorder(root -> right);

}

void preorder(Node* root){
    if(root == NULL) return;

    cout << root -> data<< " ";
    preorder(root -> left);
    preorder(root -> right);
        
}

void postorder(Node* root){
    if(root == NULL) return;

    postorder(root -> left);
    postorder(root -> right);
    cout<< root -> data << " ";
}

 int main (){
    Node* root = NULL;
    
    root = BuildTree(root);

    cout << " levelOrderTraversal : "<< endl;
    levelOrderTraversal(root);


    cout << " inorder traversal : ";
    inorder(root);
    cout<< endl;

    cout<< "preorder traversal : ";
    preorder(root);
    cout<<endl;

    cout<<"postorder traversal : ";
    postorder(root);
    cout<<endl;
    
    
 }