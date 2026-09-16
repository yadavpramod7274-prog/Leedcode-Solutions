 
class Solution {
public:

  void insert(TreeNode* root, int val) {
      if(root==NULL ) root= new TreeNode(val);
              if (root->val > val){ // go left
                 if(root->left==NULL){ // attached it
                    TreeNode* temp = new TreeNode(val);
                     root->left= temp;
               
                 }

                 else  insert(root->left,val);
                      }
        else {
             if(root->right==NULL){ // attached it
                    TreeNode* temp = new TreeNode(val);
                     root->right= temp;
               
                 }

                 else insert(root->right,val);
        }
  }
   
    TreeNode* insertIntoBST(TreeNode* root, int val) {
         insert(root,val); 
        if(root==NULL ) root= new TreeNode(val);
   
        return root;
    }
};