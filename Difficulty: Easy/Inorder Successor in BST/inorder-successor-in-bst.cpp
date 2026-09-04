/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
 
    int inOrderSuccessor(Node *root, Node *k) {
       int val=k->data;
       int ans=-1;
       if(root==NULL){
           return ans;
       }
       while(root){
           if(root->data<=val){
               root=root->right;
           }
           else{
               ans=root->data;
               root=root->left;
           }
       }
       return ans;
        
    }
};