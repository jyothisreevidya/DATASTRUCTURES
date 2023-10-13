#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
void push(node** head,int data){
    node * newnode= new node();
    newnode->data=data;
    newnode->next=*head;
    *head=newnode;

}
void insertbeg(node** head,int data){
    node* newnode=new node();
    newnode->data=data;
    newnode->next=*head;
    *head=newnode;

}
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
 
    // Insert 1 at the beginning.
    insertbeg(&head, 1);
 
    cout << "After inserting 1 at front: ";
    printlist(head);
 
    return 0;
}