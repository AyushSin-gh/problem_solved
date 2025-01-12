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
   void check(TreeNode* root , int& val  , int maxval){
     if(root == NULL){
        return ;
     }
      if(root->val >= maxval){
        val+=1;
      }

     maxval=max(root->val , maxval);
     check(root->left, val , maxval );
     check(root->right , val , maxval);
   }
    int goodNodes(TreeNode* root) {
        int ans=0;
        check(root,ans,INT_MIN);
        return ans;
    }
};