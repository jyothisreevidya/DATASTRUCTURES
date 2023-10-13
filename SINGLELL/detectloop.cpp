#include<iostream>
#include <unordered_set>
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

bool detectloop(node* head){
  std:: unordered_set<node*>s;
   while(head!=NULL){
    if (s.find(head) != s.end())
            return true;
        s.insert(head);
 
        head= head->next;
    }
 
    return false;
}
int main()
{
    struct node* head = NULL;
 
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);
 
    head->next->next->next->next = head;
 
    if (detectloop(head))
        cout << "Loop Found";
    else
        cout << "No Loop";
 
    return 0;
}
   


  