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
bool  Sun(TreeNode* leftroot , TreeNode* rightroot){
     if(leftroot==NULL && rightroot==NULL) return true;
       if(leftroot==NULL || rightroot==NULL) return false;

        if(rightroot->val!=leftroot->val) return false;
         
    else  return  Sun(leftroot->left,rightroot->right) &&  Sun(leftroot->right,rightroot->left); 
        }


    bool isSymmetric(TreeNode* root) {
     if(root==NULL) return true;
     return Sun(root->left,root->right);
    }
};