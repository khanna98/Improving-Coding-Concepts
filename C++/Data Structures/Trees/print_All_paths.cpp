#include<iostream>
using namespace std;

class node{
public:
    int data;
    node*left;
    node*right;
    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

node* build(){
    int d;
    cin>>d;

    // Base case
    if(d==-1)
        return NULL;
    
    // recursive case
    node*root = new node(d);
    root->left = build();
    root->right = build();
    return root;
}

void printArr(int*arr,int len){
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void printPath(node*root,int*arr,int len){
    // Base Case
    if(root==NULL){
        return;
    }
    arr[len++] = root->data;
    // Rec Case
    if(root->left==NULL and root->right==NULL){
        printArr(arr,len);
    }
    else{
        
        printPath(root->left,arr,len);
        printPath(root->right,arr,len);
    }
   
}

int main(int argc, char const *argv[])
{
    node*root = NULL;
    root = build();
    int n=0;
    int *arr;
    arr = new int[n];
    printPath(root,arr,n);
    cout<<endl;
    return 0;
}
