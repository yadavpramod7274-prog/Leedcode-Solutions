
class Solution {
public:
  int Exit(TreeNode* root,TreeNode* target){
    if(root==NULL) return false;
     if(root==target) return true;
      else return Exit(root->left,target) || Exit(root->right,target);
  }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==p || root==q) return  root;
        else if(Exit(root->left,p) && Exit(root->right,q)) return root;

          else if(Exit(root->left,q) && Exit(root->right,p)) return root;

        else if (Exit(root->left,p) && Exit(root->left,q)) return lowestCommonAncestor(root->left,p,q);
         else return lowestCommonAncestor(root->right,p,q);
          
        

    }
};