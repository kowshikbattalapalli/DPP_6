#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node (int val){
        data = val;
        left=right=NULL;
    }
};
void rightview( Node* root,vector<int>&ans,int level){
   if(root==NULL){
    return;
   }
   if(ans.size()==level){
    ans.push_back(root->data);
   }
   rightview(root->right,ans,level+1);
   rightview(root->left,ans,level+1);
}

int main(){
    vector<int>ans;
    Node* root= new Node(10);
    root ->left= new Node(30);
    root ->right= new Node(40);
    root ->left->left = new Node(50);
    root ->left->right= new Node(20);
    root ->right->right= new Node(90);
    int level=0;
   rightview(root,ans,level);
   for(auto i:ans){
    cout<<i<<" ";
   }
   return 0;

}
