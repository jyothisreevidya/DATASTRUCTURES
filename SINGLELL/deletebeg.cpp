#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
void push(node** head,int data){
    node* newnode=new node();
    newnode->data=data;
    newnode->next=*head;
    *head=newnode;

}
void printlist(node* node){
    while(node!=NULL){
        cout<<node->data;
        node=node->next;
    }
    cout<<endl;
}
void deletebeg(node **head) {
    node* ptr;
    if (*head == NULL) {
        // Empty list, nothing to delete
        return;
    } else {
        ptr = *head;
        *head = (*head)->next;
        free(ptr);
    }
}
int main()
{
    
    node* head = NULL;
 
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    cout << "Created Linked list is: ";
    printlist(head);
 
   deletebeg(&head);
 
    cout << "After deleting at beginning: ";
    printlist(head);
 
    return 0;
}





