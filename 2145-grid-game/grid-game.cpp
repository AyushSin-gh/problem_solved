class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
         long long topsum=0;
        long long  bottomsum=0;
        long long minsum=LLONG_MAX;

        for(int i=0;i<grid[0].size();i++){
            topsum+=grid[0][i];
           
        }
      
        for(int i=0;i<grid[0].size(); i++){
            topsum-=grid[0][i];
            minsum= min(minsum , max(bottomsum , topsum));
           
            bottomsum+=grid[1][i];
          
        }

        return minsum;

    }
};