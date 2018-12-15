/*
    Also known as the insertAfter function in Linked List.
    Time Complexity : O(1), as it does constant amount of work.
*/
#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
}*head;

class LinkedList{
public:
    void insertInBeg(struct node **ptr,int num){
        struct node *n = new node;
        n->data = num;
        n->next = (*ptr);
        (*ptr) = n;
    }

    void insertInBetween(struct node *ptr,int num){
        if(ptr==NULL){
            cout<<"The previous node is NULL, item cannot be added."<<endl;
            return;
        }
        struct node *n = new node;
        n->data = num;
        n->next = ptr->next;
        ptr->next = n;
    }

    void printList(struct node *ptr){
        for(;ptr!=NULL;ptr = ptr->next){
            cout<< ptr->data<<" ";
        }
        cout<<endl;
    }
};

int main(void){
    LinkedList ll;
    head = NULL;
    int n,a;
    cout<<"Enter the size of Linked List : ";
    cin>>n;
    cout<<"Enter the elements of List : "<<endl;
    for(int i=0;i<n;i++){
        cin>>a;
        ll.insertInBeg(&head,a);
    }
    ll.printList(head);
    ll.insertInBetween(head->next,8);
    ll.printList(head);
}