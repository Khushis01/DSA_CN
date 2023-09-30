#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

Node *mergeTwoSortedLinkedLists(Node *list1, Node *list2) {
		Node *h1 = list1, *h2 = list2, *newh = NULL, *newt = NULL;

        if(h1 == NULL) {
            return list2;
        }
        
		if(h2 == NULL) {
            return list1;
        }

        if(h1 -> data < h2 -> data) {
            newh = h1;
			newt = h1;
			h1 = h1 -> next;
        }
        else {
            newh = h2;
			newt = h2;
			h2 = h2 -> next;
        }

        while(h1 != NULL && h2 != NULL) {
            if(h1 -> data < h2 -> data) {
                newt -> next = h1;
				newt = newt -> next;
                h1 = h1 -> next;
            }
			else{
                newt -> next = h2;
				newt = newt -> next;
                h2 = h2 -> next;
        }
	}

	/*
	//same functionality as while loop 
	//it reduces the iteration through while loop 
	if(h1 != NULL) {
		tail -> next = h1;
	}

	if(h2 != NULL) {
		tail -> next = h2;
	}
	*/
        while(h1 != NULL) {
                newt -> next = h1;
				newt = newt -> next;
                h1 = h1 -> next;
            }

        while(h2 != NULL) {
                newt -> next = h2;
				newt = newt -> next;
                h2 = h2 -> next;
            }

            return newh;
}

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
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
		Node *head1 = takeinput();
		Node *head2 = takeinput();
		Node *head3 = mergeTwoSortedLinkedLists(head1, head2);
		print(head3);
	}
	return 0;
}