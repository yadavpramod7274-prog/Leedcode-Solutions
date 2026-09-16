
class Solution {
public:
void  Inorder(TreeNode* root, vector<int> &ans){
    if(root==NULL) return;  // base case
     Inorder(root->left,ans); // call1
      ans.push_back(root->val);// work
     Inorder(root->right,ans); // call2

  }
    bool isValidBST(TreeNode* root) {
     
      vector<int>ans;
     
      Inorder(root,ans);
       for(int i=1;i<ans.size();i++){
        if(ans[i]<=ans[i-1])return false;
       }
       return true;
    }
};