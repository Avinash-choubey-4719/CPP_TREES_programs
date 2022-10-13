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

Node * mirrorTree(Node * root){
    if(root -> left == NULL && root -> right == NULL){
        return root;
    }

    if(root -> left != NULL){
        root -> left = mirrorTree(root -> left);
    }

    if(root -> right != NULL){
        root -> right = mirrorTree(root -> right);
    }

    Node * temp = root -> right;
    root -> right = root -> left;
    root -> left = temp;
    return root;
}

void inorder(Node * root){
    if(root == NULL){
        return;
    }

    inorder(root -> left);
    cout<<root -> data;
    inorder(root -> right);
}

int main(){
    Node * root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);

    inorder(root);
    root = mirrorTree(root);
    inorder(root);

    return 0;
}