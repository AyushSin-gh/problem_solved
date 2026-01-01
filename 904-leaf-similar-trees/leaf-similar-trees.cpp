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
   void check(TreeNode* root ,  vector<int> &leaf){
    if (root == NULL) return;
    if(root->left == NULL && root->right == NULL){
         leaf.push_back(root->val);
         return ;
   }
   check(root->left , leaf);
   check(root->right , leaf);

 }
   
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if((root1== NULL && root2!= NULL) || (root1!=NULL && root2 ==NULL)){
            return false;
        }
        else{
        vector<int>leaf1;
        vector<int>leaf2;
        check(root1 , leaf1);
        check(root2 , leaf2);
          
        if (leaf1 ==  leaf2){
            return true;
        }
        else{
            return false;
        }
    }
    }
};