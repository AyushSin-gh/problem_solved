class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0;
        int j=k;
       long long  int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
       
        double maxi=  (double)sum/k;
        while(j<=nums.size()-1){
           sum-=nums[i];
           sum+=nums[j];
           i++;
           j++;
           maxi=max(maxi,(double) sum /k);
        }

        return maxi;
    }
};