#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
}*head;

struct node * push(struct node **ptr,int data){
    struct node *nn = new node;
    struct node *tmp = (*ptr);
    nn->data = data;
    nn->next = (*ptr);

    if((*ptr)!=NULL){
        while(tmp->next != (*ptr)){
            tmp = tmp->next;
        }
        tmp->next = nn;
    }
    else{
        nn->next = nn;
    }
    (*ptr) = nn;
    return (*ptr);
}

void printList(struct node *ptr){
    struct node *first = ptr;
    int sum=0;
    do{
        cout<<first->data<<" ";
        sum+=first->data;
        first=first->next;
    }while(first!=head);
    cout<<endl;
    cout<<"Sum of circular linked list : "<<sum<<endl;
}

int main(){
    head = NULL;
    head = push(&head,10);
    head = push(&head,20);
    head = push(&head,30);
    head = push(&head,40);
    head = push(&head,50);

    printList(head);
    return 0;
}

