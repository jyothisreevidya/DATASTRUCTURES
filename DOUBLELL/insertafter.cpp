#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *prev;
    node *next;
};
void push(node **head,int data){
    node* newnode=new node();
    newnode->data=data;
    newnode->next=*head;
    newnode->prev=NULL;
    if ((*head) != NULL)
        (*head)->prev = newnode;
    (*head) = newnode;
}
// Given a node as prev_node, insert a new node 
// after the given node
void insertafter(node* prevnode, int data)
{
	// Check if the given prev_node is NULL
	if (prevnode == NULL) {
		cout << "the given previous node cannot be NULL";
		return;
	}

	// 1. allocate new node
	node* newnode = new node();

	// 2. put in the data
	newnode->data = data;

	// 3. Make next of new node as next of prev_node
	newnode->next = prevnode->next;

	// 4. Make the next of prev_node as new_node
	prevnode->next = newnode;

	// 5. Make prev_node as previous of new_node
	newnode->prev = prevnode;

	// 6. Change previous of new_node's next node
	if (newnode->next != NULL)
		newnode->next->prev = newnode;
}

// This code is contributed by shivanisinghss2110.

void printlist(node * node){
    while(node!=NULL){
        cout<<" "<<node->data;
        node=node->next;
    }
    cout<<"\n";
}
int main()
{
    // Start with the empty list
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

    // Insert 10 after the node with data value 4
    insertafter(node_with_value_4, 10);

 
    cout << "After inserting 1 at front: ";
    printlist(head);
 
    return 0;
}
