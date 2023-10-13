#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

};
void push(node**head,int data){
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
int count(node* node){
    int count=0;
    while(node!=NULL){
        count++;
        node=node->next;
    }
    return count;
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
    cout<<"no of nodes in the linked list : "<<count(head);
    return 0;
}


