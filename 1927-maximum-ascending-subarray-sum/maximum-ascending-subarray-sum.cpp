class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {

        if(nums.size() == 1){
            return nums[0];
        }
        else{
        int sum=0;
         int curr=0;
        for(int i=0;i<nums.size() ;i++){
             curr+=nums[i];

             if( i== nums.size() -1 || nums[i] >=nums[i+1]){
                sum = max(sum, curr);
                curr=0;
             }
        }
        return sum;
    }
    }
};