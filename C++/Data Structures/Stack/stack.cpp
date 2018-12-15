#include<iostream>
#define MAX 1000
using namespace std;

class Stack{
    int top;
public:
    int arr[MAX];
    Stack(){
        top = -1;
    }
    void push(int x);
    int pop();
    bool isEmpty();
    int peek();
};

void Stack::push(int x){
    if(top>=(MAX-1)){
        cout<<"Stack Overflow"<<endl;
        return;
    }
    else{
        arr[++top] = x;
        cout<<x<<" pushed into stack."<<endl;
    }
}

int Stack::pop(){
    if(top<0){
        cout<<"Stack Underflow"<<endl;
    }
    else{
        int x = arr[top--];
        return x;
    }
}

bool Stack::isEmpty(){
    return (top<0);
}

int Stack::peek(){
    return arr[top];
}

int main(void){
    Stack s;
    cout<<"Stack is Empty : "<<s.isEmpty()<<endl;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<"Stack is Empty : "<<s.isEmpty()<<endl;
    cout<<s.pop()<<" poped from the Stack."<<endl;
    cout<<s.peek()<<" is the topmost element in the Stack."<<endl;
    return 0;
}