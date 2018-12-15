/*
    Pros : This program can grow and shrink according to the needs at runtime;
    Cons : Requires extra memory due to involvment of pointers.
*/

#include<iostream>
#include<cstdio>
using namespace std;

struct node{
    int data;
    struct node *next;
}*top;

class Stack{
public:
    struct node* push(struct node **ptr,int num){
        struct node *nn = new node;
        nn->data = num;
        nn->next = (*ptr);
        *ptr = nn;
        cout<<nn->data<<" pushed into stack."<<endl;
        return nn;
    }

    int pop(struct node** ptr){
        if(isEmpty(*ptr)){
            return INT16_MIN;
        }
        else{
            struct node *nn = (*ptr);
            (*ptr) = (*ptr)->next;
            int ans = nn->data;
            free(nn);
            return ans;
        }
    }

    bool isEmpty(struct node* ptr){
        if(top==NULL){
            return true;
        }
        else{
            return false;
        }
    }

    int peek(struct node *ptr){
        if(isEmpty(ptr)){
            return INT16_MIN;
        }
        else{
            return ptr->data;
        }
    }

};

int main(void){
    Stack s;
    top = NULL;
    int n,a;
    cout<<"Enter the number of elements : ";
    cin>>n;
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<n;i++){
        cin>>a;
        top = s.push(&top,a);
    }
    printf("%d popped from stack\n", s.pop(&top)); 
  
    printf("Top element is %d\n", s.peek(top));

    return 0;
}