#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
}*head;

void deleteNode(struct node *ptr,struct node *n){
    if(ptr==n){
        return;
    }
    ptr->data = ptr->next->data;
    n = ptr->next;
    ptr->next = ptr->next->next;
    free(n);
    return;
}
struct node * insertNodeBeg(struct node** ptr, int val){
    if(head==NULL){
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = val;                                              
    new_node->next = NULL;
    (*ptr) = new_node;    
    }
    else{
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = val;                                                                     /* 3. Make next of new node as head */
        new_node->next = (*ptr);                                                                  /* 4. move the head to point to the new node */
        (*ptr) = new_node;
    }
    return (*ptr);
}

void printlist(struct node *ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}

int main(void){
    head = NULL;
    head = insertNodeBeg(&head,10);
    head = insertNodeBeg(&head,20);
    head = insertNodeBeg(&head,30);
    head = insertNodeBeg(&head,40);

    printlist(head);
    deleteNode(head,head->next->next);
    printlist(head);
}