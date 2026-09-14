
class Solution {
public:
      int Level(TreeNode*root){
    if(root==NULL) return 0;
     return 1+ max( Level(root->left), Level(root->right));
    }
     void preorder(TreeNode* root, vector<int>& ans,int level){
        if(root==NULL) return;
        ans[level]=root->val;
         preorder(root->left,ans,level+1);
         preorder(root->right,ans,level+1);
     }
    vector<int> rightSideView(TreeNode* root) {
         vector<int> ans(Level(root),0);
          preorder(root,ans,0);
           return ans;
    }
};