#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
    struct node *prev;
}*head;

class DoublyLinkedList{
public:
    struct node * push(struct node **ptr,int num){
        if(*ptr==NULL){
            struct node *nn = new node;
            nn->data = num;
            nn->next = NULL;
            nn->prev = NULL;
            (*ptr) = nn;
        }
        else{
            struct node *nn = new node;
            nn->data = num;
            nn->next = (*ptr);
            (*ptr)->prev = nn;
            nn->prev = NULL;
            (*ptr) = nn;
        }
        return (*ptr);
    }

    void printlist(struct node *ptr){
        struct node *last;
        cout<<"Traversal in Forward direction : ";
        while(ptr!=NULL){
            cout<<ptr->data <<" ";
            last = ptr;
            ptr=ptr->next;
             
        }
        cout<<endl;
        cout<<"Traversal in Backward Direction : ";
        while(last!=NULL){
            cout<< last->data <<" ";
            last = last->prev;
        }
        cout<<endl;
    }
};

int main(void){
    DoublyLinkedList dll;
    head = NULL;
    for(int i=0;i<5;i++){
        head = dll.push(&head,i);
    }
    dll.printlist(head);
    return 0;
}