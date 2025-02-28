class Solution {
public:
    void solve (vector<int> nums  , vector<vector<int>> & ans , int indx ){
        if(indx >= nums.size()){
            ans.push_back(nums);
            return ;
        }

        // swapping 
        for(int j=indx ; j<nums.size() ; j++){
            swap(nums[indx] , nums[j]);
            //reccursion
            solve(nums, ans, indx+1);
            // acktrack bcz original string me changes kr rhe hhh 

            swap(nums[indx] , nums[j]);
        }
    }

  
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans ;
        int indx=0;
        solve(nums , ans , indx);
        return ans;
    }
};