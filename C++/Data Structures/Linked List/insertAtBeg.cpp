#include<iostream>
using namespace std;


struct Node{
    int data;
    struct Node *next;
};


class LinkedList{
    struct Node *head;
public:
    LinkedList(){
        head = NULL;
    }

    // Create a node in Linked List
    void createNode(int val){
        Node *nn = new Node;
        nn->data = val;
        nn->next = NULL;
        head = nn;
    }
    // Insert a node in Linked List
    void insertNodeBeg(int val){
        if(head == NULL){
            createNode(val);
        }
        else{
            Node *nn = new Node;
            nn->data = val;
            nn->next = head;
            head = nn;
        }
    }

    // Print the Linked List
    void printList(){
        Node *ptr = head;
        for(ptr=head;ptr!=NULL;ptr=ptr->next){
            cout<< ptr->data<<" ";
        }
        cout<<endl;
    }
};

int main(void){
    LinkedList ll;
    int n,a;
    cout<<"Enter the size of list : ";
    cin>>n;
    cout<<"Enter the elements of the list : "<<endl;
    for(int i=0;i<n;i++){
        cin>>a;
        ll.insertNodeBeg(a);
    }
    ll.printList();
}