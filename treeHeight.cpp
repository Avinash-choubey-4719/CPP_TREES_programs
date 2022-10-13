#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node * left;
    Node * right;

    Node(int data){
        this ->data = data;
        left = NULL;
        right = NULL;
    }
};

int getHeight(Node * root){
    if(root -> left == NULL && root -> right == NULL){
        return 0;
    }

    return 1 + max(getHeight(root -> left), getHeight(root -> right));
}

int main(){
    Node * root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);

    cout<<getHeight(root)<<endl;
    return 0;
}