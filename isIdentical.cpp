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

bool isIdentical(Node * root1, Node * root2){

    if(root1 == NULL && root2 == NULL){
        return true;
    }

    if(isIdentical(root1 -> left, root2 -> left) && isIdentical(root1 -> right, root2 -> right)){
        if(root1 -> data == root2 -> data){
            return true;
        }
        else{
            return false;
        }
    }

    return false;
}

int main(){
    Node * root1 = new Node(1);
    root1 -> left = new Node(2);
    root1 -> right = new Node(3);

    Node * root2 = new Node(1);
    root2 -> left = new Node(2);
    root2 -> right = new Node(3);

    if(isIdentical(root1, root2)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}