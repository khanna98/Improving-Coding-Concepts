/*
    Also known as Appending a number in Linked List.
    Time Complexity =   O(n), where n is the number of nodes.
    For optimising the function, we can add an extra pointer in the last(tail of Linked List).
    This operation will reduce the Time Complexity to O(1).
*/

#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
}*head;

class LinkedList{
public:
    void insertAtLast(struct node **ptr,int num){
        struct node *n = new node;
        n->data = num;
        n->next = NULL;
        struct node *cur = (*ptr);
        if(*ptr == NULL){
            *ptr = n;
            return;
        }
        while(cur->next!=NULL){
            cur=cur->next;
        }
        cur->next = n;
        return;
    }

    void printList(struct node *ptr){
        for(; ptr != NULL; ptr = ptr->next){
            cout << ptr->data << " ";
        }
        cout << endl;
    }
};

int main(void){
    LinkedList ll;
    head = NULL;
    int n, a;
    cout << "Enter the size of list : ";
    cin >> n;
    cout << "Enter the elements of the list : " << endl;
    for(int i = 0; i < n; i++){
        cin >> a;
        ll.insertAtLast(&head, a);
    }
    ll.printList(head);
}