class Solution {
public:
    int minFlips(int a, int b, int c) {
    int ans=0;
    while(a>0 || b>0 || c>0){
        int bita = a&1;
        int bitb=  b&1;
        int bitc=  c&1;

        if((bita| bitb) != bitc){
            if(bitc == 1){
                ans+=1;
            }
            else{
                ans+=(bita+bitb);
            }
        }
        a = a>>1;
        b = b>>1;
        c = c>>1; 

    }

    return ans;
    }
};