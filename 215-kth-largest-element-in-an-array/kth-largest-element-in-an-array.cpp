class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // int maxi;
        // int j = 0;
        // while (k > 1) {  
        //     maxi = INT_MIN;
        //     for (int i = 0; i < nums.size(); i++) {
        //         if (nums[i] > maxi) {
        //             maxi = nums[i];
        //             j = i;
        //         }
        //     }
        //     nums.erase(nums.begin() + j);
        //     k--;  
        // }
        // int ans = INT_MIN;
        // for (int i = 0; i < nums.size(); i++) {
        //     if (nums[i] > ans) {
        //         ans = nums[i];
        //     }
        // }

        // return ans;


        priority_queue<int> qu;
         for(int i =0; i<nums.size() ;i++){
            qu.push(nums[i]);
         }

         while(k>1){
           qu.pop();
           k--;
         }

         return qu.top();
        

    }
};