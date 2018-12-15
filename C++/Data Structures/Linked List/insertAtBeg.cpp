/*
    Also known as the push function in Linked List.
    Time Complexity : O(1), as it does constant amount of work.
*/
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*head;

class LinkedList
{
  public:
    void insertNodeBeg(struct Node** ptr, int val){
        struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
        new_node->data = val;                                                                     /* 3. Make next of new node as head */
        new_node->next = (*ptr);                                                                  /* 4. move the head to point to the new node */
        (*ptr) = new_node;
    }

    // Print the Linked List
    void printList(struct Node *ptr){
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
        ll.insertNodeBeg(&head, a);
    }
    ll.printList(head);
}