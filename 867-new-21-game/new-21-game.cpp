// class Solution {
// public:
//     double new21Game(int n, int k, int maxPts) {
//         if( k == 0 || n>= k-1+ maxPts){
//             return 1.0;
//         }
//         int point = k-1+ maxPts ;
//         vector<double> dp(point+1 , 0.0);
//         dp[0] =1.0;
//         for(int i=1; i<= point ; i++){
//             for(int pt =1;pt<=maxPts ;pt++){
//                 if(i-pt >=0 && i-pt <k){
//                     dp[i] += dp[i-pt] *(1.0/maxPts);
//                 }
//             }
//         }
//         double prob=0.0;
//         for(int i =k;i<=n;i++){
//             prob+=dp[i];
//         }

//         return prob;
//     }
// };


class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
        if (k == 0 || n >= k - 1 + maxPts) {
            return 1.0;
        }

        vector<double> dp(n + 1, 0.0);
        dp[0] = 1.0;

        double windowSum = 1.0;   // sum of last maxPts dp values
        double result = 0.0;

        for (int i = 1; i <= n; i++) {
            dp[i] = windowSum / maxPts;

            if (i < k) {
                windowSum += dp[i];  // still can draw
            } else {
                result += dp[i];     // stop here
            }

            if (i - maxPts >= 0) {
                windowSum -= dp[i - maxPts];
            }
        }

        return result;
    }
};
