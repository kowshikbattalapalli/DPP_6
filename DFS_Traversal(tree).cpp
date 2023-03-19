#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int x){
    data=x;
    left=NULL;
    right=NULL;
    }
};
void preordertrav(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preordertrav(root->left);
    preordertrav(root->right);
}
void inordertrav(node* root){
    if(root==NULL){
        return;
    }
    inordertrav(root->left);
    cout<<root->data<<" ";
    inordertrav(root->right);
}
void postordertrav(node* root){
    if(root==NULL){
        return;
    }
    postordertrav(root->left);
    postordertrav(root->right);
    cout<<root->data<<" ";
}


int main(){
    node* root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(50);
    root->right->right=new node(70);
    cout<<"Preorder traversal of tree:"<<endl;
    preordertrav(root);
    cout<<endl;
    cout<<"Inorder traversal of tree:"<<endl;
    inordertrav(root);
    cout<<endl;
    cout<<"Postorder Traversal of tree:"<<endl;
    postordertrav(root);
    cout<<endl;
    return 0;
}
