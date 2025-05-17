class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int> mp;
        for(auto& edge : edges){
            mp[edge[0]]++;
            mp[edge[1]]++;
        }
        auto it = mp.begin();
       for( it =mp.begin();it !=mp.end() ;it++){
           if(it->second != 1){
            return it->first;
           }
       }

return -1;
    }
};