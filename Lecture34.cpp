#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node *right;
    Node *left;


    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

void buildTree(Node* &root){
    int var;
    cout<<"Enter the value : ";
    cin>>var;
    if(var==-1){
        return;
    }
    root = new Node(var);
    cout<<"Enter the data which you want to enter at the left of the root node which is : "<<var<<" "<<endl;
    buildTree(root->left);
    cout<<"Enter the data which you want to enter at the right of the root node which is : "<<var<<" "<<endl;
    buildTree(root->right);
}

void printPreorderTransversal(Node * root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printPreorderTransversal(root->left);
    printPreorderTransversal(root->right);
}
void printInOrderTransversal(Node* root){
    if(root==NULL){
        return;
    }
    printInOrderTransversal(root->left);
    cout<<root->data<<" ";
    printInOrderTransversal(root->right);
}
void printPostOrderTransversal(Node* root){
    if(root==NULL){
        return;
    }
    printPostOrderTransversal(root->left);
    printPostOrderTransversal(root->right);
    cout<<root->data<<" ";
}

int main(){
    Node *root;
    buildTree(root);
    printPreorderTransversal(root);
    cout<<endl;
    printInOrderTransversal(root);
    cout<<endl;
    printPostOrderTransversal(root);    
    return 0;
}