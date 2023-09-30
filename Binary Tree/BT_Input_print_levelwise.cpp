#include<bits/stdc++.h>
#include "BinaryTree.h"
using namespace std;

BinaryTree<int>* takeinputlevelwise() {
    int rootdata;
    cout << "Enter the root data : ";
    cin >> rootdata;

    if(rootdata == -1) {
        return NULL;
    }

    BinaryTree<int>* root = new BinaryTree<int>(rootdata);
    queue<BinaryTree<int>*> pendingNode;
    pendingNode.push(root);

    while(!pendingNode.empty()) {
          BinaryTree<int>* front = pendingNode.front();
          pendingNode.pop();

          cout <<"Enter left child of " << front -> data << ": ";
          int leftchildata;
          cin >> leftchildata;
          if(leftchildata != -1) {
              BinaryTree<int>* child =  new BinaryTree<int>(leftchildata);
              front -> left = child;
              pendingNode.push(child);
          }

          cout <<"Enter right child of " << front -> data << ": ";
          int rightchildata;
          cin >> rightchildata;
          if(rightchildata != -1) {
              BinaryTree<int>* child =  new BinaryTree<int>(rightchildata);
              front -> left = child;
              pendingNode.push(child);
          }
    }
    return root;
}

void printlevelwise(BinaryTree<int>* root) {
    if(root == NULL) {
        return;
    }

    queue<BinaryTree<int>*> pendingNode;
    pendingNode.push(root);

    while(!pendingNode.empty()) {
        BinaryTree<int>* front = pendingNode.front();
        pendingNode.pop();
        cout << front -> data<< ":"; 
        if(front -> left != NULL) {
            cout <<"L:" <<front -> left -> data;
            pendingNode.push(front -> left);
        }
        else {
            cout << "L:-1";
        }
        cout << ",";

        if(front -> right != NULL) {
            cout <<"R:" <<front -> right -> data;
            pendingNode.push(front -> right);
        }
        else {
            cout << "R:-1";
        }
        cout << endl;
    }
}

int main() {
    BinaryTree<int>* root = takeinputlevelwise();
    printlevelwise(root);
    delete root;
}

// this compiler is not giving correct answer