#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
 class stack_1{
 	node *top;
 	public:
 		stack_1(){
 			top = NULL;
		 }

void push(int n){
    struct node *nn = new node;
    nn->data = n;
    nn->next = top;
    top = nn;
    cout<<nn->data<<" pushed into stack"<<endl;
}

int pop(){
    struct node *tmp = top;
    top = top->next;
    int n = tmp->data;
    free(tmp);
    return n;
}
bool empty(){
   return top==NULL;
}
int top_1(){
    if(!empty())
        return top->data;
}
};

stack_1 sortStack(stack_1 s){
    stack_1 s1;
    int n = sizeof(s);
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<s.pop()<<" ";
    }
    cout<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    return s;
}

int main()
{
    stack_1 input;
    int size;
    int element;
    cin>>size;
    for(int i =0 ;i<size;i++){
    	cin>>element;
    	input.push(element);
	}
   
    // This is the temporary stack
    stack_1 tmpStack = sortStack(input);
    cout<<"Hello"<<endl;
   
    while (!tmpStack.empty())
    {
        cout << tmpStack.top_1()<< " ";
        tmpStack.pop();
    }
}