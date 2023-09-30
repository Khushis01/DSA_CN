#include<bits/stdc++.h>
#include "Node.cpp"
using namespace std;

//TC = O(n^2)
Node *takeInput() {
    int data;
    cin >> data;
    Node * head = NULL;
    while(data != -1) {
        Node *newnode = new Node(data);
        if(head == NULL) {
            head = newnode;
        } 
        else{
            Node * temp = head;
            while( temp -> next != NULL) {
                temp = temp -> next;
            }
            temp -> next = newnode;
        } 
        cin >> data;
    }
    return head;
}

//TC = O(n)
Node *takeInputTail() {
    int data;
    cin >> data;
    Node * head = NULL;
    Node * tail = NULL;
    while(data != -1) {
        Node *newnode = new Node(data);
        if(head == NULL) {
            head = newnode;
            tail = newnode;
        } 
        else{
            tail -> next = newnode;
            tail = tail -> next;
            //or
            //tail = newnode;
        } 
        cin >> data;
    }
    return head;
}

void print(Node * head) {
    Node * temp = head;
    while(temp != NULL) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {
    Node * head = takeInput();
    print(head);

    Node * head2 = takeInputTail();
    print(head2);
}