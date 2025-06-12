class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int ans=0;
        int curr=0;
        for(int i=1;i<nums.size() ;i++){
            curr= abs(nums[i] -  nums[i-1]);
            ans=max(ans, curr);
            cout<<ans<<" ";
        }

        ans= max(ans , abs(nums[nums.size() -1] - nums[0]) );

        return ans;
    }
};