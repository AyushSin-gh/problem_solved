// class Solution {
// public:
//     int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
//         vector<int> ans;

//         for(int i=0;i<nums1.size();i++){
//             for(int j=0;j<nums2.size();j++){
//                 ans.push_back(nums1[i] ^ nums2[j]);
//             }
//         }
         
//         int dig=ans[0];
//         for(int i=1;i<ans.size();i++){
//            dig= dig^ans[i];
//         } 

//       return dig;

//     }
// };
class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int xorNums1 = 0, xorNums2 = 0;
        for (int num : nums1) {
            xorNums1 ^= num;
        }
        for (int num : nums2) {
            xorNums2 ^= num;
        }
        int result = 0;
        if (nums2.size() % 2 != 0) {
            result ^= xorNums1; 
        }
        if (nums1.size() % 2 != 0) {
            result ^= xorNums2; 
        }

        return result;
    }
};

