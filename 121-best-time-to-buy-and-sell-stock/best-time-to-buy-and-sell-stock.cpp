class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int  less= prices[0];
        int profit=0;

        for(int i =1;i<prices.size(); i++){
            if(prices[i] < less){
                less=prices[i];
            }
            else{
                profit=max(profit , prices[i] - less );
            }
        }

        return profit;
        
    }
};