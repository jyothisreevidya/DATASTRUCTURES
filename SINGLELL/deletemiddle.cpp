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
void deletemiddle( node **head) 
{ 
int key;
cin>>key;
node *curr = *head;
 node *prev; 
if(curr == NULL) 
return ; 
if(curr!= NULL && curr->data == key) 
{ 
*head= curr->next; 
free(curr); 
return ; 
} 
while (curr != NULL && curr->data != key) 
{ 
prev = curr;
curr = curr->next; 
} 
prev->next = curr->next; 
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
 
   deletemiddle(&head);
 
    cout << "After deleting at beginning: ";
    printlist(head);
 
    return 0;
}





