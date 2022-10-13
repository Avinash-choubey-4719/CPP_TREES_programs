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

Node * lowestAncestor(Node * root, int n1, int n2){
    if(root == NULL){
        return NULL;
    }

    else if(root -> data > n1 && root -> data > n2){
        return lowestAncestor(root -> left, n1, n2);
    }

    else if(root -> data < n1 && root -> data < n2){
        return lowestAncestor(root -> right, n1, n2);
    }

    return root;
}

int main(){
    Node * root = new Node(1);
    root -> left = new Node(0);
    root -> right = new Node(2);

    Node * result = lowestAncestor(root, 0, 2);
    cout<<result -> data<<endl;
    return 0;
}