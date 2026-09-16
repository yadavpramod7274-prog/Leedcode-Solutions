 
class Solution {
public:
        int sum = 0;
  void reverseInoder(TreeNode* root){
    if(root==NULL) return;
    // right root left
   reverseInoder(root->right);
    root->val+= sum;
     sum = root->val;
    reverseInoder(root->left);

  }
    TreeNode* bstToGst(TreeNode* root) {
      reverseInoder(root);
           return root;
    }
};