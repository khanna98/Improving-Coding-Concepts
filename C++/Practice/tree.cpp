#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
}*root;

void inserNode(struct node *ptr,int val){
    if(root==NULL){
        struct node *nn = new node;
        nn->data = val;
        nn->left = NULL;
        nn->right = NULL;
        root = nn;
    }
    else{
        if(ptr->data > val){
            if(ptr->left!=NULL){
                inserNode(ptr->left,val);
            }
            else{
                node *nn = new node;
                nn->right = NULL;
                nn->left = NULL;
                nn->data = val;
                ptr->left = nn;
            }
        }
        else if(ptr->data < val){
            if(ptr->right!=NULL){
                inserNode(ptr->right,val);
            }
            else{
                node *nn = new node;
                nn->right = NULL;
                nn->left = NULL;
                nn->data = val;
                ptr->right = nn;
            }
        }
    }
}

struct node* deleteNode(struct node *ptr,int val){
    if(ptr==NULL){
        return ptr;
    }
    if(val < ptr->data){
        ptr->left = deleteNode(ptr->left,val); 
    }
}

void inOrder(struct node *ptr){
    if(ptr!=NULL){
        inOrder(ptr->left);
        cout<<ptr->data<<" ";
        inOrder(ptr->right);
    }
}

int main(){
    root = NULL;
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        inserNode(root,a);
    }

    inOrder(root);
    return 0;
}