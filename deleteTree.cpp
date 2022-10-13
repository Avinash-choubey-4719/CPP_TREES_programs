#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node * left;
    Node * right;

    Node(int data){
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};

void deleteTree(Node * root){
    if(root -> left == NULL && root -> right == NULL){
        delete(root);
    }

    if(root -> left != NULL)
    deleteTree(root -> left);

    if(root -> right != NULL)
    deleteTree(root -> right);
}

void inorder(Node * root){
    if(root == NULL){
        return;
    }

    inorder(root -> left);
    cout<<root -> data<<" ";
    inorder(root -> right);
}

int main(){
    Node * root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);

    inorder(root);
    deleteTree(root);
    inorder(root);

    return 0;
}