
class Solution {
public:
   TreeNode*  prev = NULL;
     bool flag= true;
void  Inorder(TreeNode* root){
    if(root==NULL) return;  // base case
     Inorder(root->left); // call1
      if(prev!=NULL){
        if(root->val <= prev->val){
             flag = false;
        }
      }
       prev=root;
     Inorder(root->right); // call2
      
  }
    bool isValidBST(TreeNode* root) {
      Inorder(root);
       return flag;
    }
};