#include<bits/stdc++.h>
#include"TreeNode.h"
using namespace std;

/*
void printTree(TreeNode<int>* root) {
    cout << root -> data << endl;
    for(int i = 0; i < root -> children.size(); i++) {
        printTree(root -> children[i]);
    }
}
*/

void printTree(TreeNode<int>* root) {
    if(root == NULL) {
        return;
    }

    cout << root -> data << ":";
    for(int i = 0; i < root -> children.size(); i++) {
        cout << root -> children[i] -> data << ",";
    }
    cout << endl;
    for(int i = 0; i < root -> children.size(); i++) {
        printTree(root -> children[i]);
    }
}

TreeNode<int>* takeinput() {
    int rootdata;
    cout << "Enter data : ";
    cin >> rootdata;
    TreeNode<int>*root = new TreeNode<int>(rootdata);

    int n;
    cout << "Enter number of children of " << rootdata << endl;
    cin >> n;

    for(int i = 0; i < n; i++) {
        TreeNode<int> *child = takeinput();
        root -> children.push_back(child);
    }

    return root;
}

TreeNode<int>* takeinputlevelwise() {
    int rootdata;
    cout << "Enter data : ";
    cin >> rootdata;
    TreeNode<int>*root = new TreeNode<int>(rootdata);

    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() != 0) {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter number of children of " << front -> data << endl;
        int numChild;
        cin >> numChild;
        for(int i = 0; i < numChild; i++) {
            int childData;
            cout << "Enter " << i << "th Child of " << front -> data << endl;
            cin >> childData;
            TreeNode<int>*child = new TreeNode<int>(childData);
            front -> children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

void printLevelWise(TreeNode<int>* root) {
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() != 0) {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << front -> data << ":";
        for(int i = 0; i < front -> children.size(); i++) {
            cout << front -> children[i] -> data;
            if(i != front -> children.size() - 1){
                cout << ",";
            }
            pendingNodes.push(front -> children[i]);
        }
        cout << endl;
    }
}

int main() {
    /*
    TreeNode<int>*root = new TreeNode<int>(1);
    TreeNode<int>*node1 = new TreeNode<int>(2);
    TreeNode<int>*node2 = new TreeNode<int>(3);
    root -> children.push_back(node1);
    root -> children.push_back(node2);
    */
    TreeNode<int> *root = takeinputlevelwise();
    printLevelWise(root);
}