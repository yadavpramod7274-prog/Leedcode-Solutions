
class Solution {
public:
      int Level(TreeNode*root){
    if(root==NULL) return 0;
     return 1+ max( Level(root->left), Level(root->right));
    }
     void nthLevel(TreeNode* root,int curr,int level, vector<int>& ans){
    if(root==NULL) return;  // base case
      if(curr==level){
       ans[curr]=root->val;
        return;
         }// work
     nthLevel(root->left,curr+1,level, ans); // call1
    nthLevel(root->right,curr+1,level,ans); // call2
  }
    void levelorder(TreeNode*root,vector<int>& ans){
        int n=ans.size();
        for(int i=0; i<n; i++){
            nthLevel(root,0,i,ans); 
           
        }
    }
    vector<int> rightSideView(TreeNode* root) {
         vector<int> ans(Level(root),0);
          levelorder(root,ans);
           return ans;
    }
};