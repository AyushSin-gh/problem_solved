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
private:
bool sum ( TreeNode* root, int tsum, int val ){
    if(root == NULL){
        return false;
    }
    val+=root->val;
    if(root -> left == NULL && root->right == NULL){
        return val == tsum;
    }
    bool l=sum(root->left, tsum , val);
    bool r=sum(root ->right , tsum , val);
    return l || r;
}
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL){
            return false;
        }
        
      return  sum(root, targetSum , 0);
      
    }
};


