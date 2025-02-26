class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i=0,j=0;
        while(i<n){
            char curr= chars[i];
            int count=0;
            while(i<n && chars[i] == curr){
                count++;
                i++;
            }
          
          chars[j++] = curr;
    
              if(count>1){
              for (char c : to_string(count)) {
              chars[j++] = c;  // Store each digit as a separate character
           }
       }
    }

        return j;
    }
};

