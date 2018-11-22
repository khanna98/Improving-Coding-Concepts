#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
}*root;

class BST{
public:
    struct node* insertNode(struct node *ptr,int val){
        if(root == NULL){
            node *n = new node;
            n->data = val;
            n->left = NULL;
            n->right = NULL;
            root = n;
            cout<<n->data<<" is the root node"<<endl;
        }
        else{
            // cout<<"Hello ji";
            if(ptr->data > val){
                if(ptr->left != NULL){
                    root = insertNode(ptr->left,val);
                }
                else{
                    node *n = new node;
                    n->data = val;
                    n->left = NULL;
                    n->right = NULL;
                    ptr->left = n;
                    cout<<n->data<<" is the left child of "<<ptr->data<<endl;
                }
            }
            else if(ptr->data < val){
                if(ptr->right !=NULL){
                    ptr = insertNode(ptr->right,val);
                }
                else{
                    node *n = new node;
                    n->data = val;
                    n->left = NULL;
                    n->right = NULL;
                    ptr->right = n;
                    cout<<n->data<<" is the right child of "<<ptr->data<<endl;
                }
            }
        }
        return root;
    }
};

int main(){
    root = NULL;
    BST bst;
    int arr[] = {8,10,3,5,9,1};
    for(int i=0;i<6;i++){
        root = bst.insertNode(root,arr[i]);
    }
    return 0;
}