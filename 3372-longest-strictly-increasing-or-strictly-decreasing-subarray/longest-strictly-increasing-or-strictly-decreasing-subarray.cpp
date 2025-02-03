class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
     vector<int> v;
     int great=1 , small=1;
     for(int i=0;i<nums.size()-1;i++){
       if(nums[i+1] > nums[i]){
        great+=1;
        v.push_back(small);
        small=1;
       }
       else if( nums[i+1] < nums[i]){
        small+=1;
        v.push_back(great);
        great=1;
       }
       else{
        if(small>1){
            v.push_back(small);
            small=1;
        }
        else if(great>1){
            v.push_back(great);
            great=1;
        }
       }
     }
     v.push_back(small);
     v.push_back(great);
     sort(v.begin() , v.end());
    
     return v.back(); 
    }
};