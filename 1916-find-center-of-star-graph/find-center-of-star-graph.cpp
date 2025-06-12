class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int> ans;
        for(int i=0; i<edges.size() ;i++){
            for(int j=0;j<edges[i].size(); j++){
                ans[edges[i][j]]+=1;
            }
        }

        auto it = ans.begin();

        for(it = ans.begin(); it!=ans.end();it++){
            if(it->second >1){
                return it->first;
            }
        }

        return -1;
    }
};