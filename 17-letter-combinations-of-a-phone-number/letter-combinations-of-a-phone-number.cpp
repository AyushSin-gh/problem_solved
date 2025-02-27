class Solution {
public:
   void solve(string digits , int indx , vector<string> map, string output , vector<string> &ans){
    if(indx >= digits.size()){
        ans.push_back(output);
        return;
    }
     int num =digits[indx] - '0';
     string  value= map[num];

     for(int i=0;i<value.size();i++){
        output.push_back(value[i]);
        solve(digits, indx+1, map , output, ans);
        output.pop_back();
     }

   }

    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.size() == 0){
            return ans;
        }
        string output;
       vector<string> map={" ", " ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int indx=0;
        solve(digits , indx, map , output, ans);
        return ans;

    }
};