class Solution {
public:
    string reverseVowels(string s) {
        int left=0;
        string a=s;
        int right=s.size() -1;
        string ans="aeiouAEIOU";
        while(left <right){
            while(left<right && ans.find(a[left]) == string::npos){
                left++;
            }
            while(left<right && ans.find(a[right]) == string::npos){
                right--;
            }
            swap(a[left] , a[right]);
            left++;
            right--;
        }

        return a;
    }
};