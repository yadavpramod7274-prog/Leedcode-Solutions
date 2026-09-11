 
class Solution {
public: 
 int Height(TreeNode* root){
         
      if(root == NULL) return 0;
      int leftAns= Height(root->left);
      int rightAns= Height(root->right);
       if(abs(leftAns-rightAns) >1) return -1;
         if(leftAns ==-1 || rightAns ==-1) return -1;
         else  return 1+max(Height(root->left),Height(root->right));
    }
    
    bool isBalanced(TreeNode* root) {
     
      if(root == NULL) return true;
      if(Height(root)==-1) return false;
       return true;
    }
};