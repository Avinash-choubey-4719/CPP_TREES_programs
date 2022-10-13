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

void anotherPreorder(Node * root){
    if(root -> left == NULL && root -> right == NULL){
        return;
    }

    if(root -> left != NULL){
        anotherPreorder(root -> left);
    }

    if(root -> right != NULL){
        anotherPreorder(root -> right);
    }

    Node * temp = root -> right;
    root -> right = root -> left;
    root -> left = NULL;
    Node * last_right = root;
    while(last_right -> right != NULL){
        last_right = last_right -> right;
    }
    last_right -> right = temp;
}

void preOrder(Node * root){
    if(root == NULL){
        return;
    }

    cout<<root -> data<<" ";
    preOrder(root -> left);
    preOrder(root -> right);
}

int main(){
    Node * root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);
    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);
    
    preOrder(root);

    anotherPreorder(root);
    cout<<endl;

    preOrder(root);

    return 0;
}