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
void levelordertrav(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* top=q.front();
        q.pop();
        if(top==NULL){
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<top->data<<" ";
            if(top->left){
                q.push(top->left);
            }
            if(top->right){
                q.push(top->right);
            }
        }
    }
}
int main(){
    node* root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(50);
    root->right->right=new node(70);
    root->left->left->right=new node(120);
    cout<<"level order traversal of binary tree:"<<endl;
    levelordertrav(root);
    return 0;
}
