 
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL ) return new TreeNode(val);
              if (root->val > val){ // go left
                 if(root->left==NULL){ // attached it
                    TreeNode* temp = new TreeNode(val);
                     root->left= temp;
               
                 }

                 else  insertIntoBST(root->left,val);
                      }
        else {
             if(root->right==NULL){ // attached it
                    TreeNode* temp = new TreeNode(val);
                     root->right= temp;
               
                 }

                 else insertIntoBST(root->right,val);
        }

        return root;
    }
};