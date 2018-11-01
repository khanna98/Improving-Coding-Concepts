#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
}*root;

class BST{
public:

    struct node* minValue(struct node* ptr){
        struct node* current = ptr;
        while(current->left != NULL){
            current = current->left;
        }
        return current;
    }
    
    void deleteNode(struct node* ptr,int val){
        if(root == NULL){
            cout<<"Tree is NULL !"<<endl;
            return;
        }
        else if(ptr->data > val){
            deleteNode(ptr->left,val);
        }
        else if(ptr->data < val){
            deleteNode(ptr->right,val);
        }
        else{
            if(ptr->right == NULL){
                struct node *temp = ptr->left;
                delete(ptr);
                ptr = temp;
            }
            else if(ptr->left == NULL){
                struct node *temp = ptr->right;
                delete(ptr);
                ptr = temp;
            }
        }

        struct node *temp = minValue(ptr->right);
        ptr->data = temp->data;
        
        deleteNode(ptr->right,temp->data);
    }
    void insertNode(struct node* ptr,int val){
            if(root == NULL){
                node *nn = new node;
                nn->data = val;
                nn->left = nn->right = NULL;
                root = nn;
                cout<<ptr->data<<" is the root."<<endl;
            }
            else{
                if(ptr->data > val){
                    if(ptr->left !=NULL){
                        insertNode(ptr->left,val);
                    }
                    else{
                        node *nn = new node;
                        nn->data = val;
                        nn->left = nn->right = NULL;
                        ptr->left = nn;
                        cout<<nn->data<<" is the left child of "<<ptr->data<<endl;
                    }
                }
                else if(ptr->data < val){
                    if(ptr->right!=NULL){
                        insertNode(ptr->right,val);
                    }
                    else{
                        node *nn = new node;
                        nn->data = val;
                        nn->left = nn->right = NULL;
                        ptr->right = nn;
                        cout<<nn->data<<" is the right child of "<<ptr->data<<endl;
                    }
                }
            }
        }
};

int main(){
    root = NULL;
    BST bst;
    bst.insertNode(root,10);
    bst.insertNode(root,20);
    bst.insertNode(root,30);
    bst.insertNode(root,40);
    bst.insertNode(root,50);

    // bst.deleteNode(root,30)
}