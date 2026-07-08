class Solution {
    public boolean canJump(int[] nums) {
        int max_index=0;
        if(nums.length== 0 || nums.length == 1){
            return true;
        }

        for(int i=0;i<nums.length -1 ;i++){
            max_index=Math.max(max_index , nums[i] + i);

            if(max_index >= nums.length -1 ){
                return true;
               
            }
            if(max_index >=i+1){
                continue;
            }
            else{
                break;
            }

        }
        return  false;
    }
}