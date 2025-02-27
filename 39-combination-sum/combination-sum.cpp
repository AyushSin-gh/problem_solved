class Solution {
public:
  void solve(vector<int>& nums ,  int tar  , vector<vector<int>>& ans ,vector<int> output  , int indx){
    if( indx >=  nums.size()){
        if(tar == 0){
            ans.push_back(output);
        }
        return;
    }

    // picking condition
    if(nums[indx] <= tar ){
        output.push_back(nums[indx]);
        solve(nums , tar - nums[indx] , ans , output, indx);
        output.pop_back();
    }

    // not picking
    solve(nums , tar , ans , output, indx+1);

  }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<vector<int>> ans ;
         vector<int> output;
         solve(candidates , target , ans , output, 0);
         return ans ;
    }
};