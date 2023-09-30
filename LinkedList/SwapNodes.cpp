#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

Node* swapNodes(Node* head, int i, int j) {
    if (head == NULL || head->next == NULL || i == j) {
        return head; // No swapping is needed for an empty list, a single-node list, or when i and j are the same.
    }

    Node* p1 = NULL, *p2 = NULL, *c1 = head, *c2 = head;

    // Find the i-th and j-th nodes and their predecessors.
    while (i > 0 && c1 != NULL) {
        p1 = c1;
        c1 = c1->next;
        i--;
    }

    while (j > 0 && c2 != NULL) {
        p2 = c2;
        c2 = c2->next;
        j--;
    }

    // If either i or j is out of range, or the two nodes are the same, no swapping is needed.
    if (i > 0 || j > 0 || c1 == NULL || c2 == NULL) {
        return head;
    }

    // Handle swapping of the nodes and their next pointers.
    if (p1 != NULL) {
        p1->next = c2;
    } else {
        head = c2; // If p1 is NULL, it means we are updating the head of the list.
    }

    if (p2 != NULL) {
        p2->next = c1;
    } else {
        head = c1; // If p2 is NULL, it means we are updating the head of the list.
    }

    Node* temp = c1->next;
    c1->next = c2->next;
    c2->next = temp;

    return head;
}


Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int i, j;
		Node *head = takeinput();
		cin >> i;
		cin >> j;
		head = swapNodes(head, i, j);
		print(head);
	}
	return 0;
}