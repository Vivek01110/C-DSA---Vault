#include<iostream>
using namespace std;

class Node {
    public:
    int val;
    Node* left;
    Node * right;

    Node(int val){
        this -> val = val;
        this -> left = NULL;
        this -> right = NULL;
     }
};

Node* insertBST(Node *root,int data){
    if(root == NULL) {
        root = new Node(data);  
        return root;
    }

    if(data < root -> val)
        root -> left = insertBST(root -> left, data);
    else 
         root -> right = insertBST(root -> right , data);


    return root; 
    
}
void creatBST(Node *&root){
    int data;
    cin >> data;

        while(data != -1){
          root  =  insertBST(root , data);
            cin >> data;
          
            }  
            return;   
        }
    
    void inorder(Node* root){
        if(root == NULL) return;

        inorder(root -> left);
        cout<< root -> val<< " ";
        inorder(root -> right);

    }

    Node* deleteNode(Node* root, int key){
        if(root == NULL)
            return NULL;

        if(root -> val == key){
            if(!root -> left && !root -> right){
                return  NULL;
            }
            else if(root -> left){
                
            }
        }
    }
int main(){

    Node * root = NULL;

    creatBST(root);

    inorder(root);
    cout<<endl;

        
}