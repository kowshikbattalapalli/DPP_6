#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    // constructor
    Node (int val){
        data = val;
        left=right=NULL;
    }
};
void leftView( Node* root,vector<int>&ans){
   if(root==NULL)return ;
    queue<Node *>q;
    q.push(root);
    q.push(NULL);
    int ct=0;

    while(!q.empty()){
        Node* t=q.front();
        q.pop();
        if(t==NULL){
            if(!q.empty()){
                q.push(NULL);
            }
            ct++;
        }
        else{
            if(ans.size()==ct){
                ans.push_back(t->data);
            }
            if(t->left!=NULL)
                q.push(t->left);
            if(t->right!=NULL)
                q.push(t->right);
        }

    }
}

int main(){
    vector<int>ans;
    Node* root= new Node(10);
    root ->left= new Node(30);
    root ->right= new Node(40);
    root ->left->left = new Node(50);
    root ->left->right= new Node(20);
    root ->right->right= new Node(90);
   leftView(root,ans);
   for(auto i:ans){
    cout<<i<<" ";
   }
   return 0;

}
