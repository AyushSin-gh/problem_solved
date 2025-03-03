// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         unordered_map<int, int>mp;

//         for(auto i : nums){
//             mp[i]+=1;
//         }
//         int ans=0;
//         for(auto it = mp.begin() ;it!=mp.end();it++){
//             if(it->second == 1){
//                 ans=it->first;
//                 break;
//             }
//         }
//      return ans;
//     }
// }; for this code tc is o(n)   but space is also o(n);

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int num : nums) {
            ans ^= num;  // a ^ a = 0 (XOR of same numbers cancels out)   and 0 ^ b = b (XOR with 0 gives the same number)
        }
        return ans;
    }
};
