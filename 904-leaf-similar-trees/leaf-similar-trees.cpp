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
 void check(TreeNode* root , vector<int>& leave){
    if(root==NULL){
        return;
    }
    if(root->left == NULL && root ->right == NULL){
        leave.push_back(root->val);
    }
    check(root->left,leave);
    check(root->right,leave);
 }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>leave1;
        vector<int>leave2;
       check(root1,leave1);
       check(root2,leave2);

       return leave1 == leave2;
    }
};