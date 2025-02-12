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

    void check(TreeNode* root, int tsum , long long sum ,int &count){
        if(root == NULL){
            return ;
        }
         

        sum+=root->val;
        if(sum == tsum){
            count+=1;
        }
       


        check(root->left , tsum , sum , count );
        check(root->right , tsum , sum , count ); 
        
    }
int pathSum(TreeNode* root, int targetSum) {
        if(root == NULL){
            return 0;
        }

        int count=0;

        check(root , targetSum , 0 , count );

        count+= pathSum(root->left , targetSum  );
        count+= pathSum(root->right , targetSum ) ;

        return count;
    }
};