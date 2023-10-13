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
void insertatend(node *head,int data){
    node* newnode=new node();
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }
    node *ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;

    }
    ptr->next=newnode;
}
void printlist(node* node){
    while(node!=NULL){
        cout<<" "<<node->data;
        node=node->next;
    }
    cout<<"\n";
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
    insertatend(head,9);
    cout<<"after inserting at end linkedlist is:";
    printlist(head);
}
