#include<iostream>
using namespace std;
class node{
    public: 
    int data;
    node*next;
};
void insertafter(node* prev_node,int data){
    if(prev_node->next==NULL){
        cout<<"node cannnot be null";
    }
    node* new_node=new node();
    new_node->data=data;
    new_node->next=prev_node->next;
    prev_node->next=new_node;

}
void push(node** head,int data){
    node* newnode=new node();
    newnode->data=data;
    newnode->next=*head;
    *head=newnode;

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
 
    insertafter(head, 1);
 
    cout << "After inserting 1 after 2: ";
    printlist(head);
 
    return 0;
}