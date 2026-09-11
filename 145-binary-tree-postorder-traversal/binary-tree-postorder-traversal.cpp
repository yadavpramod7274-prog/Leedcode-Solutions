/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
  void  postorder(TreeNode* root,vector<int> &ans){
    if(root==NULL) return;  // base case
      postorder(root->left,ans); // call1
      postorder(root->right,ans); // call2
        ans.push_back(root->val);// work

  }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        postorder( root,ans);
         return ans;
    }
};