class Solution {
public:
    int maximum69Number (int num) {
        string dig= to_string( num);
        for(char &ch : dig){
            if (ch == '6'){
               ch='9';
               break;
            }
        }

        return stoi(dig);
     
    }
};