#include<iostream>
#define MAX 100
using namespace std;
int stk[MAX];
int top=-1;

void push(int x){
    if(top>=(MAX-1)){
        return;
    }
    else{
        stk[++top] = x;
    }
}

int pop(){
    if(top<0){
    }
    else{
        int n = stk[top--];
        return n;
    }
}

void reverse(int str[]){
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        push(a);
    }
    
    while(top>=0){
        cout<<pop()<<" ";
    }
}

int main(){
    int str[MAX];
    reverse(str);
    return 0;
}