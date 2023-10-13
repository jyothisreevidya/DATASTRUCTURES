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

void insertbefore(node* nextnode, int data) {

    if (nextnode == NULL) {
        cout << "The given next node cannot be NULL";
        return;
    }
    node* newnode = new node();

    newnode->data = data;

    newnode->prev = nextnode->prev;

    nextnode->prev = newnode;

    newnode->next = nextnode;

    if (newnode->prev != NULL)
        newnode->prev->next = newnode;
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

    node* node_with_value_4 = head;
    while (node_with_value_4 != NULL && node_with_value_4->data != 4) {
        node_with_value_4 = node_with_value_4->next;
    }

    insertbefore(node_with_value_4, 10);

    cout << "After inserting 10 before 4: ";
    printlist(head);

    return 0;
}
