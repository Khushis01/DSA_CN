#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node(int data) {
        this -> data = data;
        next = NULL;
    }
};

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

void print(Node * head) {
    Node * temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

Node* insertATith( Node * head, int pos, int data) {
    Node * temp = head;
    Node *newnode = new Node(data);
    int count = 0;
    
    if(pos == 0) {
        newnode -> next = head;
        return newnode;
    }

    while(temp != NULL) {
        if(count == pos - 1) {
            newnode -> next = temp -> next;
            temp -> next = newnode;
            break;
        }
        count++;
        temp = temp -> next;
    }
    return head;
}

/*
// CN Code 
Node* insertATith(Node * head, int pos, int data) {
    Node *temp = head;
    Node *newnode = new Node(data);
    int count = 0;
    
    if (pos == 0) {
        newnode->next = head;
        return newnode;
    }

    while(temp != NULL && count < pos - 1) {
        temp = temp -> next;
        count++;
    }

    if(temp != NULL) {
        Node * a = temp -> next;
        temp -> next = newnode;
        newnode -> next = a;
    }
    return head;
}
*/

int main() {
    Node *head = takeInput();
    print(head);

    int i, data;
    cin >> i >> data;
    head = insertATith(head, i, data);
    print(head);

}