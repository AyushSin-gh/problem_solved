class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // long long int num=0;
        // for (int nums : digits){
        //     num = num*10 + nums;
        // }
        // num+=1;
        // string dig=to_string(num);
        // vector<int>ans;
        // for(char ch:dig){
        //     ans.push_back((ch - '0'));
        // }

        // return ans;  time complexicity issue 

        int n = digits.size() -1;
        for(int i=n;i>=0;i--){
         if(digits[i] < 9){
            digits[i]++;
            return digits;
         }
         else{
            digits[i]=0;
         }
        }
       digits.insert(digits.begin() , 1);
       return digits;

    }
};