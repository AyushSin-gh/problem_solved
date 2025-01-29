class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        // for(int i =0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         for(int k=j+1;k<nums.size();k++){
        //             if(nums[i] + nums[j] + nums[k] == 0){
        //                 vector<int>subans;
        //                 subans.push_back(nums[i]);
        //                 subans.push_back(nums[j]);
        //                 subans.push_back(nums[k]);
        //                 sort(subans.begin() , subans.end());
        //                 if(find(ans.begin() , ans.end(),subans) == ans.end()){
        //                 ans.push_back(subans);
        //                 }
        //             }
        //         }
        //     }
        // }
        // return ans;
     sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < nums.size() - 2; i++) {  
        if ( i > 0 && nums[i] == nums[i - 1]) continue;
        int left = i + 1, right = nums.size() - 1;
        
        while (left < right) {
            int total = nums[i] + nums[left] + nums[right];
            if (total == 0) { 
                res.push_back({nums[i], nums[left], nums[right]});
                left++;
                right--;
                
              
                while (left < right && nums[left] == nums[left - 1]) left++;
                while (left < right && nums[right] == nums[right + 1]) right--;
            }
            else if (total < 0) { 
                left++;
            }
            else {  // Decrease the sum
                right--;
            }
        }
    }
    
    return res;
}

    

};