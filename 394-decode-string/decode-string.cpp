class Solution {
public:
    string decodeString(string s) {
        stack<string> st;
        stack<int> numStack;
        string currStr = "";
        int num = 0;

        for (char c : s) {
            if (isdigit(c)) {
                num = num * 10 + (c - '0'); 
            } else if (c == '[') {
                st.push(currStr);
                numStack.push(num);
                currStr = "";
                num = 0;
            } else if (c == ']') {
                string temp = currStr;
                int repeatTimes = numStack.top();
                numStack.pop();
                
                currStr = st.top();
                st.pop();

                while (repeatTimes--) {
                    currStr += temp;
                }
            } else {
                currStr += c;
            }
        }

        return currStr;
    }
};