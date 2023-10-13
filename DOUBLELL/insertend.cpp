#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* prev;
    node* next;
};

void push(node** head, int data) {
    node* newnode = new node();
    newnode->data = data;
    newnode->next = *head;
    newnode->prev = NULL;
    if (*head != NULL)
        (*head)->prev = newnode;
    *head = newnode;
}

// Given a reference (pointer to pointer) to the head
// of a DLL and an int, appends a new node at the end
void append(node** head, int data)
{
	// 1. allocate node
	node* newnode = new node();
	node* temp = *head;
	newnode->data = data;
    newnode->next = NULL;
	if (*head == NULL) {
		newnode->prev = NULL;
		*head = newnode;
		return;
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newnode;
	newnode->prev = temp;

	return;
}



void printlist(node* node) {
    while (node != NULL) {
        cout << " " << node->data;
        node = node->next;
    }
    cout << "\n";
}

int main() {
    node* head = NULL;

    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);

    cout << "Created Linked list is: ";
    printlist(head);

append(&head, 9);
    cout<<"after inserting at end linkedlist is:";
    printlist(head);
    return 0;
}
