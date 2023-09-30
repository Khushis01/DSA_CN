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

int NumNode(BinaryTree<int>* root) {
    if(root == NULL) {
        return 0;
    }

    return 1 + NumNode(root -> left) + NumNode(root -> right);
}

//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
int main() {
    BinaryTree<int>* root = takeinput();
    print(root);
    cout << "Number of Nodes are: " << NumNode(root);
    delete root;
}

// this compiler is not giving correct answer