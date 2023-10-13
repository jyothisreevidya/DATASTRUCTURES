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
void deleteend(node** head) {
    if ((*head) == NULL) {
        return;
    }

    node *curr, *prev;
    for (curr = *head; curr->next != NULL; curr = curr->next) {
        prev = curr;
    }

    prev->next = NULL;


    free(curr);
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
 
   deleteend(&head);
 
    cout << "After deleting at end: ";
    printlist(head);
 
    return 0;
}

