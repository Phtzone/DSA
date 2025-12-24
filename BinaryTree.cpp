#include <iostream>
using namespace std;

struct Tree{
    int data;
    Tree* left;
    Tree* right;
};

typedef Tree* tree;

tree makeNode(int x){
    tree newNode = new Tree();
    newNode -> data = x;
    newNode -> left = NULL;
    newNode -> right = NULL;
    return newNode;
}


tree addNode(tree &root, int value){
    if (root == NULL){
    }

    if( root ->data > value){
        root->left = addNode(root->left, value);   
    } else{
        root->right = addNode(root->right, value);
    }
    return root;
}

void LNR(tree root){
    if (root == NULL) return;
    LNR(root -> left);
    cout << root -> data << " ";
    LNR(root -> right);
}

void deleteNode(tree &root, int value){
    tree par = NULL;
    tree curr = root;

    while (curr != NULL && curr -> data != value){
        par = curr;
        if (vale)
    }
}



int main(){

    return 0;
}