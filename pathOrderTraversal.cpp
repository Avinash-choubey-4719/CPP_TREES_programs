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

void print(int pathData[], int length){
    for(int i = 0;i<length;i++){
        cout<<pathData[i]<<" ";
    }
    cout<<endl;
    return;
}



void printPathOrderTraversal(Node * root, int pathData[], int pathLength){
    if(root == NULL){
        return;
    }

    pathData[pathLength] = root -> data;

    pathLength++;

    if(root -> left == NULL && root -> right == NULL){
        print(pathData, pathLength);
    }

    else{
        printPathOrderTraversal(root -> left, pathData, pathLength);
        printPathOrderTraversal(root -> right, pathData, pathLength);
    }
}

void printPath(Node * root){
    int pathData[10000];
    printPathOrderTraversal(root, pathData, 0);
}

int main(){
    Node * root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);

    printPath(root);
    return 0;
}