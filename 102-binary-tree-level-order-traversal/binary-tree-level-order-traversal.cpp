
class Solution {
public:
 int Level(TreeNode*root){
    if(root==NULL) return 0;
   
     return 1+ max( Level(root->left), Level(root->right));
    }
 void nthLevel(TreeNode* root,int curr,int level,vector<int>&v){
    if(root==NULL) return;  // base case
      if(curr==level){
       v.push_back(root->val);// root
        return;
         }// work
     nthLevel(root->left,curr+1,level,v); // call1
     nthLevel(root->right,curr+1,level,v); //
 }
   void lorder(TreeNode*root,vector<vector<int>> &ans){
        int n=Level(root);
        for(int i=1; i<=n; i++){
             vector<int>v;
            nthLevel(root,1,i,v); 
             ans.push_back(v);
            cout<<endl;
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
    lorder(root,ans);
     return ans;
    }
};