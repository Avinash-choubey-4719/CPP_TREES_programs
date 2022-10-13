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

int sizeOfTree(Node * root){
    static int count = 0;
    if(root == NULL){
        return count;
    }

    sizeOfTree(root -> left);
    count++;
    sizeOfTree(root -> right);
}

int main(){
    Node * root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);

    cout<<sizeOfTree(root)<<endl;
    return 0;
}