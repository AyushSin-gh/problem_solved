class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        unordered_set<char> s;
        int i=0;
        int j=0;
        int ans=0;
        int num=0;
        if(str.size() == 1){
            return 1;
        }
        else{
        while(j<str.size() ){
            if(s.find(str[j]) == s. end()){   // nahi mila 
                s.insert(str[j]);
            }
            else{
                num = s.size();
                ans=max(num, ans);
                s.erase(str[i]);
                j=j-1;
                i++;
            }
            j++;
        }
        num=s.size();
        ans = max(ans,num);
        return ans;
        }
    }
};