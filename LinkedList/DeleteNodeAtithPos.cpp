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

Node* deleteATith( Node * head, int pos) {
    Node * temp = head;
    int count = 0;
    
    if(pos == 0) {
        // Checking the list is empty or not 
        if(head == NULL) {
            return NULL;
        }
        head = head -> next;
        return head;
    }

    while(temp != NULL) {
        if(count == pos - 1) {
            // Checking if the element is beyond the count 
            if(temp -> next == NULL) {
                return head;
            }

            temp -> next = temp -> next -> next;
            break;
        }
        count++;
        temp = temp -> next;
    }
    return head;
}

int main() {
    Node *head = takeInput();
    print(head);

    int i;
    cin >> i;
    head = deleteATith(head, i);
    print(head);

}