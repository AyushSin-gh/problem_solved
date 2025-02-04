class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int min=INT_MAX;
        int profit=0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]<min){
                min=nums[i];
            }

            profit=max(profit,abs(min-nums[i]));
        }

        return profit;
    }
};