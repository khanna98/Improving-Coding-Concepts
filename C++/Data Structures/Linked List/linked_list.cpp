#include<iostream>
using namespace std;

// Linked List
class node{
public:
    int data;
    node *next;
    // node *prev;
    node(int d){
        data = d;
        next = NULL;
        // prev = NULL;
    }
};

/*
class LinkedList{
    node *head;
    node *tail;
public:
    void add(){

    }
};
*/

void insertAtHead(node*&head,int data){ // Passing a Pointer by reference
    if(head==NULL){
        head = new node(data);
        return;
    }
    node*n = new node(data);
    n->next = head;
    head = n;

}

void insertInMiddle(node*&head,int data,int p){
    if(p==0){
        insertAtHead(head,data);
    }
    else{
        node*tmp = head;
        for(int i=0;i<p-1;i++){
            tmp = tmp->next;
        }
        node*n = new node(data);
        n->next = tmp->next;
        tmp->next = n;
    }
}

void printList(node*head){
    while(head->next!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<head->data<<endl;
}

void deleteAtHead(node*&head){
    node*n = head;
    head = head->next;
    cout<<n->data<<" deleted"<<endl;
    delete n;
}

ostream&operator<<(ostream&a,node*&head){
    printList(head);
    return a;
}

istream&operator>>(istream&is,node*&head){
    int d;
    cin>>d;
    while(d!=-1){
        insertAtHead(head,d);
        cin>>d;
    }
}

void reverse(node*&head){
    node*c = head;
    node* p = NULL;
    node* n;
    
    while(c!=NULL){
        // Save the current node
        n = c->next;

        // Update the Current node
        c->next = p;

        // Move c and p one step ahead;
        p = c;
        c = n;
    }
    head = p;
}

node* recReverse(node *head){
    if(head->next == NULL){
        return head;
    }
    // Rec Case
    node*ch = recReverse(head->next);
    // node*tmp = head->next;
    // tmp->next = head;
    head->next->next = head;
    head->next = NULL;
    return ch;

}

node* midpoint(node*head){
    node*slow = head;
    node*fast = head->next;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

node* merge(node*a,node*b);

node* mergeSort(node*l){
    if(l==NULL || l->next == NULL){
        return l;
    }

    node*mid = midpoint(l);
    node*a = l;
    node*b = mid->next;
    mid->next = NULL;

    a = mergeSort(a);
    b = mergeSort(b);

    return merge(a,b);
}

node* merge(node*a,node*b){
    if(a==NULL){
        return b;
    }
    else if(b==NULL){
        return a;
    }
    else{
        node *c;
        if(a->data<b->data){
            c = a;
            c->next = merge(a->next,b);
        }
        else{
            c = b;
            c->next = merge(a,b->next);
        }
        return c;
    }
}


int main(void){
    node *head = NULL;
    // insertAtHead(head,7);
    // insertAtHead(head,6);
    // insertAtHead(head,5);
    // insertAtHead(head,3);
    // insertAtHead(head,2);
    // insertAtHead(head,1);
    cin>>head;
    head = mergeSort(head);
    // printList(head);
    // cout<<endl;
    // insertInMiddle(head,4,3);
    // printList(head);
    // cout<<endl;
    // deleteAtHead(head);
    // printList(head);
    // cout<<endl;

    // cout<<head;

    // reverse(head);
    // cout<<head;

    // head = recReverse(head);


    cout<<head;
    return 0;
}