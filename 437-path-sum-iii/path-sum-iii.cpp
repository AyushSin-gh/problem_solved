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
    void findpath(TreeNode* root, int targetSum, long long sum, int &count) {
        if (root == nullptr) return;
        
        sum += root->val;
        
        if (sum == targetSum) count++;
        
        findpath(root->left, targetSum, sum, count);
        findpath(root->right, targetSum, sum, count);
    }

public:
    int pathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return 0;
        
        int count = 0;
        
        // Start a new path from the current node
        findpath(root, targetSum, 0, count);
        
        // Recursively check for paths starting from left and right subtrees
        count += pathSum(root->left, targetSum);
        count += pathSum(root->right, targetSum);
        
        return count;
    }
};
