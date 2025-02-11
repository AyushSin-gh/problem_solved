class Solution {
public:
   int solve ( int n , int curr , vector<int> &num){
    if(curr ==  n  ){
        return 1;
    }

    if(curr > n){
        return 0;
    }

    if(num[curr] !=-1){
        return num[curr];
    }
   num[curr] = solve(n , curr + 1 , num)  + solve (n, curr+2 , num);
   return num[curr];
   }
 
    int climbStairs(int n) {
    vector<int> arr(n + 1, -1);
    int ans= solve (n , 0 , arr);
    return ans;
    }
};