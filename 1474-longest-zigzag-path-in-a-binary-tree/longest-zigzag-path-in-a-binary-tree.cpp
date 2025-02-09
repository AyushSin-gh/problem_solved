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
   int maxlen=0;
   void cal(TreeNode* root , bool isleft , int length){
    if(root == NULL){
        return ;
    }
    maxlen=max(length, maxlen);
    if(isleft){//comming form left
      cal( root->right , false , length+1 );
      cal(root->left , true , 1); // reset to 1
    }
    else{
        cal(root->left , true , length+1);
        cal(root->right , false , 1);
    }
   }

    int longestZigZag(TreeNode* root) {
        if(root == NULL ){
            return 0;
        }

        cal(root ->left, true , 1 );
        cal(root->right , false, 1);

      return maxlen;
    }
};