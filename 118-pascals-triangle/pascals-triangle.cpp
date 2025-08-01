class Solution {
public:
    vector<vector<int>> generate(int numRows) {
     vector<vector<int>> final;
     for(int i=0;i<numRows;i++){
        vector<int> ans(i+1, 1);

        for(int j=1;j<i;j++){
            ans[j]=final[i-1][j-1] + final[i-1][j];
        }
        final.push_back(ans);
     }   

     return final;
    }
};