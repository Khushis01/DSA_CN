#include<bits/stdc++.h>
#include "BinaryTree.h"
using namespace std;

BinaryTree<int>* takeinput() {
    int rootdata;
    cout << "Enter the data : ";
    cin >> rootdata;

    if(rootdata == -1) {
        return NULL;
    }

    BinaryTree<int>* root = new BinaryTree<int>(rootdata);
    BinaryTree<int>* leftchild = takeinput();
    BinaryTree<int>* rightchild = takeinput();
    root -> left = leftchild;
    root -> right = rightchild;

    return root;
}

void print(BinaryTree<int>* root) {
    if(root == NULL) {
        return;
    }

    cout << root -> data << ":";
    if(root -> left != NULL) {
        cout << " L: " <<root -> left -> data;
    }

    if(root -> right != NULL) {
        cout << " R: " <<root -> right -> data;
    }
    cout << endl;
    print(root -> left);
    print(root -> right);
}

int main() {
    BinaryTree<int>* root = takeinput();
    print(root);
    delete root;
}